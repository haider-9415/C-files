#include<iostream>
using namespace std;
int main(){

    // it is to find multiples of a +ve integer and its number
    int multiple=0,input,ndiv=0,init,final,sum=0;
    cout<<"Enter a no. to find its multiples: ";
    cin>>input;
    cout<<"Enter range in +ve integer: ";
    cin>>init>>final;

    cout<<"Multiples of "<<input<<": ";
    for (int i = init; i <= final; i++)
    {
        if (i%input==0)
        {
            multiple++;
            cout<<i<<",";
            sum+=i;
        }
        // else if (i%input!=0)
        // {
        //     ++ndiv;
        // }
    }
    cout<<endl<<"no. of multiples of "<<input<<" = "<<multiple<<endl;
    cout<<"no. of those which are not multiples of "<<input<<" = "<<((final-init)+1)-multiple<<endl; //Because, total numbers in range 'a' to 'b' = (a-b)+1
    cout<<"Sum of multiples of "<<input<<" = "<<sum;
    // or
    // cout<<"no. of those which are not multiples of "<<input<<" = "<<ndiv;

}