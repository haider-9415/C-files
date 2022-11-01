#include<iostream>
using namespace std;

int main(){
    int x=10;
    int y=10;
    bool z=true;
    int a=20;
    cout<<(x==y==z)<<endl; //1
    cout<<(x+=a-=10)<<endl; //20
    cout<<(a*=100%20); // 0 because '100%20 = 0'
    return 0;
}