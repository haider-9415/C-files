#include <iostream>
using namespace std;
int main(){
    
    
    // it is to print n!
    cout<<"Enter an integer to find its factorail: ";
    int y,z=1;
    cin>>y;
    for (int i = y; i >= 1; i--)
    {
        z*=i;
    }
    cout<<y<<"! = "<<z<<endl;

    
    
    // it is to print a to the power b
    int j=1,a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    for (int i = 1; i <= b; i++)
    {
        j*=a;    // in this a multiply by itself b times
    }
    cout<<a<<" to the power "<<b<<" = "<<j<<endl;




    /* To find sum of all odd and sum of all even integers from 'a' to 'b' */
    cout<<" Enter a: ";
    int a2;cin>>a2;
    cout<<"Enter b: ";
    int b2;cin>>b2;
    int sum1=0;
    int sum2=0;
    int sum3=0;

    cout<<"All integers from "<<a2<<" to "<<b2<<" = ";
    for (int i = a2; i <= b2; i++)
    {
        if (i%2 != 0)
        {
            sum1+=i;
            cout<<i<<",";
        }
        else
        {
            sum2+=i;
            cout<<i<<",";
        }
        sum3+=i;
    }
    cout<<endl;
    cout<<"Sum of all odd integers from "<<a2<<" to "<<b2<<" = "<<sum1<<endl;
    cout<<"Sum of all even integers from "<<a2<<" to "<<b2<<" = "<<sum2<<endl;
    cout<<"Sum of all integers from "<<a2<<" to "<<b2<<" = "<<sum3<<endl;




    /* To find first n factorial */
    cout<<"Enter n: ";
    int input2;cin>>input2;
    int fact = 1;
    for (int i = 1; i <= input2; i++)
    {
        fact *= i;
        cout<<i<<"! = "<<fact<<endl;

    }
    cout<<endl;
    



}