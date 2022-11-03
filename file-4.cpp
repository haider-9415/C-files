#include<iostream>
using namespace std;
int main(){

    // it is to find multiples of a +ve integer and its number
    int div=0,input,ndiv=0,init,final;
    cout<<"Enter a no. to find its multiples and number of the multiples\n";
    cin>>input;
    cout<<"Enter range in +ve integer \n";
    cin>>init>>final;

    for (int i = init; i <= final; i++)
    {
        if (i%input==0)
        {
            div++;
            cout<<i<<",";
        }
        // else if (i%input!=0)
        // {
        //     ++ndiv;
        // }
    }
    cout<<endl<<"no. of multiples of "<<input<<" = "<<div<<endl;
    cout<<"no. of those which are not multiples of "<<input<<" = "<<((final-init)+1)-div; //Because, total numbers in range 'a' to 'b' = (a-b)+1
    // or
    // cout<<"no. of those which are not multiples of "<<input<<" = "<<ndiv;
}
