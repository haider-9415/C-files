#include <iostream>
using namespace std;
int add(int a,int b){
    cout<<a+b;
}

// we can create multiple functions using same name
int add(int a,int b,int c,int d){
    int sum=a+b+c+d;
    cout<<sum;
}
// this function is to find 'a' to the power 'b'
int power(int a,int b){
    int x=1;
    for (int i = 1; i <= b; i++)
    {
        x*=a;
    }
    cout<<x;   
}

// this function is to find n!
int factorial(int n){
    int x=1;
    for (int i = 1; i <= n; i++)
    {
        x*=i;
    }
    cout<<x;
}

// this function is to give output using 'print' instead of 'cout'
string print(string x){
    cout<<x;
}
int main(){
    add(4,5);
    print("\n");

    int c=10,d=20;
    add(c,d);
    print("\n");

    add(10,20,30,40);
    print("\n");

    power(2,4);
    print("\n");

    factorial(5);


}
