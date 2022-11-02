#include <iostream>
using namespace std;

// To convert a binary no. into its decimal form 
int dec(int x){
    int sum=0,power=1;
    while (x>0)
    {
        int last=x%10;
        sum+=(last*power);
        power*=2;
        x/=10;
    }
    cout<<"decimal form = "<<sum<<endl;
}

int bin(int x){
    int ans=0,power=1;
    while (x>=1)
    {
        ans+=((x%2)*power);
        x/=2;
        power*=10;     
    }
    cout<<"binary form = "<<ans;

}

int main(){
    dec(1010);

    bin(10);

}