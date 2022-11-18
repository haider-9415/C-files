#include <iostream>
using namespace std;

int main(){

    // a simple calculator
    int num1,num2;
    char opr; 
    cout<<"Enter first no. \n";
    cin>>num1;
    cout<<"Enter second no. \n";
    cin>>num2;
    cout<<"Enter operator out of +,-,*,/,% \n";
    cin>>opr;
    switch (opr)
    {
    case '+':
        cout<<num1+num2;
        break;
    case '-':
        cout<<num1-num2;
        break;
    case '*':
        cout<<num1*num2;
        break;
    case '/':
        cout<<num1/num2;
        break;
    case '%':
        cout<<num1%num2;
        break;
    }

}