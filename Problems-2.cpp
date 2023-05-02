#include <iostream>
using namespace std;

/* For problem 1 */
void f1(int *arr1,int idx,int n){
    if (idx == n)
    {
        return;
    }
    cout<<arr1[idx]<<",";
    f1(arr1,idx+1,n);

}

/* For problem 2 */
int f2(int *arr,int idx,int n){
    if (idx == n-1)
    {
        return arr[idx];
    }
    return max(arr[idx] , f2(arr,idx+1,n));
}

/* For problem 3 */
int f3(int *arr,int idx,int n){
    if(idx == n-1){
        return arr[idx];
    }
    return arr[idx]+f3(arr,idx+1,n);
}

int main(){

    /* problem 1 */
    /* Print all elements of a given array recursively*/
    int n1=10;
    int arr1[] = {1,2,3,4,5,6,7,8,9,10};
    cout<<"The array arr1: ";
    f1(arr1,0,n1);
    cout<<endl;



    /* Problem 2 */
    /* Find max. element in a given array */
    int n2 = 10;
    int arr2[] = {1,2,90,3,43,0,56,99,3000,100};
    int result1 = f2(arr2,0,n2);
    cout<<"The greatest element in arr2 = "<<result1<<endl;



    /* Problem 3 */
    /* Calculate sum of all elements in the given array */
    int n3 = 4;
    int arr3[] = {10,20,30,40};
    int result2 = f3(arr3,0,n3);
    cout<<"The sum of all elements of arr3 = "<<result2<<endl;



}