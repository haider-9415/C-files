#include<iostream>
using namespace std;

int main(){
    int x;
    int y=10;
    int z=20;
    cout<<(x=y)<<endl; //10
    cout<<(x+=z)<<endl; //30
    cout<<(y-=z)<<endl; //-10
    cout<<(z*=y)<<endl; //-200 because, '-10' has been assigned for 'y' in 'y-=z'
    cout<<(z/=x)<<endl; //-6   because, z=(-200) after 'z*=y' and x=30 after 'x+=z'
    cout<<(z%=4)<<endl; //-2   because, z=(-6) after 'z/=x'
    return 0;
}