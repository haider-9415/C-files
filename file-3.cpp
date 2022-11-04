#include <iostream>
using namespace std;
int main(){
    // // to add the values of the array
    // int arr1[]={12,2,3,4,5};
    // int sum=0;
    // int size=sizeof(arr1)/sizeof(arr1[0]);

    // for (int i = 0; i < size; i++)
    // {
    //     sum+=arr1[i];
    // }
    // cout<<sum;


    // // to find maximum value in the array
    // int arr2[]={1,3,5,23,45,6,10};
    // int max=arr2[0];
    // int size=sizeof(arr2)/sizeof(arr2[0]);
    // for (int i = 1; i < size; i++)
    // {
    //     if (max<arr2[i]){
    //         max=arr2[i];
    //     }
    //     else{
    //         cout<<max;
    //         break;
    //     }
    // }


    // to check no. in array
    int arr3[]={12,345,65,23,1,0,10};
    int size = sizeof(arr3)/sizeof(arr3[0]);
    int ans=-1,num1;
    cout<<"Enter a no. to check it is in the array or not. \n -1 for not otherwise it gives its index no. \n";
    cin>>num1;
    for (int i = 0; i < size; i++)
    {
        if (arr3[i]==num1){
            ans=i;
            break;
        }
    }
    cout<<ans;
    

    
    
}