#include <iostream>
using namespace std;

int num1=200;
// cout<<num2;     // you can see local variable can not print
int main(){
    cout<<num1<<endl;   // you can see a global variable can print

    int num1=500;
    cout<<num1<<endl;  // you can see local variable has more precedence than global variable

    cout<<::num1;      // using '::' this operator we can print gloabal variable

    int num2=300;
}