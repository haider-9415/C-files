#include <iostream>
using namespace std;
int main(){

    // To convert binary into decimal

    // int input1,sum=0,power=1;
    // cin>>input1;
    // while (input1>0)
    // {
    //     int last=input1%10;
    //     sum+=(last*power);
    //     power*=2;
    //     input1/=10;
    // }
    // cout<<sum;
    // return 0;

    // to convert a decimal no. into binary no.
    int input2,ans=0,power=1;
    cin>>input2;
    while (input2>=1)
    {
        ans+=((input2%2)*power);  /* if we have to print 26 then we will print it 
                                     from a no. as (2x10)+6*/
        input2/=2;
        power*=10;     
    }
    cout<<ans;
    
}