#include <iostream>
using namespace std;
int main(){

    /* to find a number in an array */
    int arr1[]={12,34,23,5,6,7,900,122,33};
    int size=sizeof(arr1)/sizeof(arr1[0]);
    int num1;
    cout<<"Enter the no. : ";
    cin>>num1;
    int ans1 = -1;
        for (int i = 0; i < size; i++)
        {
            if (arr1[i]==num1){
            ans1 = i;
            break;
            }
        }
        if (ans1 == -1)
        {
            cout<<num1<<" is not in the array \n";
        }
        else
        {
            cout<<"Index no. of "<<num1<<" = "<<ans1;
        }
        
    
}