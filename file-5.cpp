#include <iostream>
using namespace std;
int main(){
    // // To create an A.P.
    
    int num1,input,num2;
    cout<<"Enter first term \n";
    cin>>num1;
    cout<<"Enter common difference \n";
    cin>>num2;
    cout<<"Enter how many terms do you want \n";
    cin>>input;
    cout<<"The A.P. : ";
    for (int i = 1; i <= input; i++)
    {
        cout<<num1<<",";
        num1+=num2;
    }
    cout<<"..... \n";

    // // To find Nth term of an A.P.

    int num3,num4,num5;
    cout<<"Enter the number of the term \n ";
    cin>>num3;
    cout<<"Enter the first term \n ";
    cin>>num4;
    cout<<"Enter the common difference \n ";
    cin>>num5;
    cout<<"the Nth term = "<<(num4+(num3-1)*num5)<<endl;

}