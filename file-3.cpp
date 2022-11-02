#include<iostream>
using namespace std;

// this function is for to find 'a' to the power 'b'
int power(int a,int b){
    int num1=1;
    for (int i = 1; i <= b; i++)
    {
        num1*=a;
    }
    cout<<num1;
}

// this function is to print an integer value using 'print' beside of 'cout'
int print(int x){
    cout<<x;
}

// this function a string value using 'print' beside of 'cout'
string print(string x){
    cout<<x;
}
int main(){
    
    power(4,3);

    print("\n");

    print(3+4);
}