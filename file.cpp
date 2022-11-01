#include <iostream>
using namespace std;
int main(){
    // int i=1;
    // while (i<=10)
    // {
    //     cout<<i<<"\n";
    //     i=i+1;
    // }
    // cout<<"Your first 10 digits";
    
    // int n;
    // cout<<"Enter n numbers \n";
    // cin>>n;

    // int sum=0;
    // int i=1;
    // while (i<=n)
    // {
    //     sum+=i;
    //     i++;
    // }
    
    // cout<<sum;

    int n=1;

    while (n<=100)
    {
        if (n%3==0 && n%5==0){
            cout<<"FizzBuzz,";
        }

        else if (n%5==0){
            cout<<"Buzz,";
        }
        else if (n%3==0){
            cout<<"Fizz,";
        }
        else{
            cout<<n<<",";
        }
        n++;
    }
    
}