// Arithmetic Operators

#include<iostream>
using namespace std;

int main(){
    int x=10;
    int y=10;
    cout<<(x+y)<<endl; //20
    cout<<(x-y)<<endl; //0
    cout<<(x*y)<<endl; //100
    cout<<(x/y)<<endl; //1
    cout<<(x%y)<<endl; //0
    cout<<(x++)<<endl; //10
    cout<<(y--)<<endl; //10
    cout<<(++x)<<endl; //12 because increment has been done in 'x++' but it does not show
    cout<<(--y)<<endl; //8  because decreament has been done in 'y--' but does nat show
    return 0;
}