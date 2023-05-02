#include <iostream>
#include <vector>
using namespace std;

/* For problem 1 */
bool f1(int *arr,int n,int i,int x){

    // base case
    if (i == n)
    {
        return false;
    }
           //self work   //assumption
    return (arr[i]==x or f1(arr,n,i+1,x));
}

void f2(int *arr,int n,int i,int sum,vector<int> &result){
    // base case
    if (i == n)
    {
        // to store substes of arr in result
        result.push_back(sum);
        return;
    }
    // if ith element is picked
    f2(arr,n,i+1,sum+arr[i],result);
    // if ith element is not picked
    f2(arr,n,i+1,sum,result);
}

int f3(int i,int j,int n,int m){
    // base case
    if (i == m-1 and j == n-1)
    {
        return 1;
    }
    // it is to stop from going outside of the grid
    if (i >= m or j >= n)
    {
        return 0;
    }
           
    return f3(i,j+1,n,m) + f3(i+1,j,n,m);
}


int main(){

    /* Problem 1 */
    /* Find x is in the array or not */

    // int arr[] = {-10,20,43,-99,33,32,-23,-47,67,79};
    // int n = 7;
    // cout<<" Enter x: ";
    // int x;cin>>x;

    // bool result = f1(arr,n,0,x);
    // if (result == true)
    // {
    //     cout<<"YES";
    // }
    // else cout<<"NO";
    // cout<<"\n\n";




    /* Problem 2 */
    /* Find sum of elements of each subsets */
    // int arr[] = {1,2,3};
    // int n = 3,i = 0,sum = 0;
    // vector<int> result;
    // f2(arr,n,i,sum,result);

    // cout<<"Sum of elements of each subset of {1,2,3}: ";
    // for (int i = 0; i < result.size(); i++)
    // {
    //     cout<<result[i]<<" ";
    // }
    


    /* Problem 3 */
    /* Find no. of ways to reach from (0,0) to (n-1,m-1) in a grid */
    /* Constrant => you can move only right or down */
    int i=0,j=0;
    cout<<"Enter n: ";
    int n;cin>>n;
    cout<<"Enter m: ";
    int m;cin>>m;
    int result = f3(i,j,n,m);
    cout<<"No. of ways = "<<result;


    


     
}