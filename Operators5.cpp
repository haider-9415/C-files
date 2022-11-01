#include<iostream>
using namespace std;

int main(){
    int x=2;
    char y='a';
    cout<<sizeof(x)<<endl; // 4bytes
    cout<<sizeof(y)<<endl; // 1bytes

    int b;
    int c;
    x==10?b=10:b=20;
    cout<<b<<endl;    // 20
    y=='name'?c=true:c=false;
    cout<<c;  // 0

    cout<<(&y)<<endl;
    cout<<(&x)<<endl;
    cout<<(&b)<<endl;
    cout<<(&c)<<endl;                 

    

    return 0;
}
