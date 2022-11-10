#include <iostream>
using namespace std;
int main(){

    /* Problem 1 */
    /* Add two numbers given in two different base */

    // cout<<"Enter a decimal no.\n";
    // int dec1;cin>>dec1;
    // cout<<endl;

    // cout<<"Enter a binary no. \n";
    // int bin1;cin>>bin1;
    // int bin2=bin1;

    // int sum=0,power=1;
    // while (bin1>0)
    // {
    //     int last=bin1%10;
    //     sum+=(last*power);
    //     power*=2;
    //     bin1/=10;
    // }
    // cout<<endl;
    // cout<<"In decimal form, "<<dec1 <<" + "<< bin2<<" = "<<dec1+sum<<"\n \n";




    /* Problem 2 */
    /* Multiply two numbers given in two defferent base */

    // cout<<"Enter a decimal no.\n";
    // int dec2;cin>>dec2;
    // cout<<endl;

    // cout<<"Enter a binary no. \n";
    // int bin3;cin>>bin3;
    // int bin4=bin3;

    // int sum1=0,power1=1;
    // while (bin3>0)
    // {
    //     int last=bin3%10;
    //     sum1+=(last*power1);
    //     power1*=2;
    //     bin3/=10;
    // }
    // cout<<endl;
    // cout<<"In decimal form, "<<dec2 <<" * "<< bin4<<" = "<<dec2*sum<<endl;




    /* Problem 3 */
    /* find sum of first n natural numbers in banary form */

    // cout<<"Enter the number n \n";
    // int n;cin>>n;
    // int sum=0;
    // for (int i = 1; i <= n; i++)
    // {
    //     sum+=i;
    // }

    // int ans=0,power=1,sum1=n;
    // while (sum>=1)
    // {
    //     ans+=((sum%2)*power);
    //     sum/=2;
    //     power*=10;     
    // }
    // cout<<"Sum of first "<<sum1<<" natural numbers in decimal form = "<<ans;




    /* Problem 4 */
    /* Count last zeroes in the binary form of a given decimal no. */

    cout<<"Enter a decimal no. \n";
    int dec;cin>>dec;

    int ans=0,power=1;
    while (dec>=1)
    {
        ans+=((dec%2)*power);
        dec/=2;
        power*=10;     
    }
    cout<<ans;


    


}