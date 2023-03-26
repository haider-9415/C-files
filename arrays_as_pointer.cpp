#include <iostream>
using namespace std;

/* In this function, the address of the first element of the array arr3 is stored in the 
   pointer ptr3 and then we will access the whole array arr3 by call-by-reference */
void print(int *ptr3, int n){
    cout<<"Using dereferenceing method \n   ";
    for (int i = 0; i < n; i++)
    {
        cout<<*(ptr3+i)<<",";
    }
    cout<<endl;

    // or
    cout<<"without Using dereferenceing method \n   ";
    for (int i = 0; i < n; i++)
    {
        cout<<ptr3[i]<<",";
    }
    cout<<endl;
    
}
int main(){

    // /* The name of the array stores the address of its first element */
    // int arr1[3] = {10,20,30};
    // int *ptr1 = &arr1[0];
    // int *ptr2 = &arr1[2];
    // cout<<"In arr1: "<<arr1<<endl;
    // cout<<"In ptr1: "<<ptr1<<endl;
    
    // // Therefore, we can dereference it
    // cout<<"After deferenceing \n";
    // cout<<"   In arr1: "<<*arr1<<endl;
    // cout<<"   In ptr1: "<<*ptr1<<endl;


    // // Since the array works as pointer
    // // Therefore, we can apply pointer arithmetic on arrays
    // cout<<"After increament of 1 \n";
    // cout<<"In arr1: "<<(arr1+1)<<" At where: "<<*(arr1+1)<<endl;
    // cout<<"After increament of 2 \n";
    // cout<<"In arr1: "<<(arr1+2)<<" At where: "<<*(arr1+2)<<endl;


    // /* printing elements of an array as a pointer */
    // int arr2[10] = {1,2,3,4,5,6,7,8,9,10};
    // int n = 10; // length of the array arr2

    // cout<<"arr2: {";
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<*(arr2+i)<<",";
    // }
    // cout<<"}";


    /* call-by-reference of an array */
    int arr3[5] = {12,13,14,15,16};
    print (arr3 , 5);

    // therefore, we can change the element of the array
    *(arr3+0) = 30; //changing first element
    *(arr3+2) = 60; //changing third element
    *(arr3+4) = 90; //changing last element
    cout<<"\nAfter changing some elements:\n";
    print (arr3 , 5);


    
    /* Printing 2-D arrays,using as a pointer*/
    int arr5[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<*(*(arr5+i)+j)<<",";/* when i=0 then *(arr5+i) dereference {1,2,3}
                                         when i=1 then *(arr5+i) dereference {4,5,6} 
                                         when i=2 then *(arr5+i) dereference {7,8,9} */
        }
        cout<<endl;   
    }

}
