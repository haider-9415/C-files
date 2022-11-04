#include <iostream>
using namespace std;
int main(){
    // int arr1 []={1,2,3,4,5,6,7,9,8,12,34};
    // cout<<sizeof(arr1)<<endl;
    // cout<<arr1[5]<<endl;
    // arr1[5]=43;               // Now, at index 5, there is 43
    // cout<<sizeof(arr1)<<endl;
    // cout<<arr1[5];            // You can observe

    // // we can insert values in arrays externally
    // char arr2 [20];
    // arr2 [0]='$';
    // arr2 [8]='s';
    // cout<<arr2[0]<<endl<<arr2[8]<<endl<<sizeof(arr2);

    int arr3[]={12,34,56,4,3,2,5,6,7,7,8,9,0,2,5678,321,34,12,1,2};
    int elements=sizeof(arr3)/sizeof(arr3[0]); // to find no. of elements
    cout<<"no. of elements: "<<elements<<endl;
    for (int i = 0; i < elements; i++)         // using this we can print elements of an array
    {
        cout<<arr3[i]<<",";
    }
    

}