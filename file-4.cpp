#include<iostream>
using namespace std;
int main(){

    // it is to find 3 digit multiples of a +ve integer and its number
    int div=0,input,ndiv=0;
    cout<<"Enter a no. to find its 3 digit multiples \n";
    cin>>input;

    for (int i = 100; i <=999; i++)
    {
        if (i%input==0)
        {
            div++;
            cout<<i<<",";
        }
        else if (i%input!=0)
        {
            ++ndiv;
        }
    }
    cout<<endl<<"no. of 3 digit multiples of "<<input<<" = "<<div<<endl;
    cout<<"no. of those which are not multiple of "<<input<<" = "<<ndiv;
}