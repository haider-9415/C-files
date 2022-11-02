#include <iostream>
using namespace std;

int add(int a){
    cout<<a<<endl;
    cout<<&a<<endl;
}

int add1(int &num5){
    cout<<endl<<num5<<endl;
    cout<<&num5<<endl;
}

void print(int num9,int num10=10,int num11=45){
    cout<<endl<<num9+num10+num11;
}


int main(){
    // you can observe that without using '&' operator variables having same value acquire different locations in memory.
    int x=10;
    int y=x;
    cout<<endl<<&x;
    cout<<endl<<&y;
 
    int num1=500;
    int &num2=num1;
    cout<<endl<<&num1;
    cout<<endl<<&num2<<endl;

    int num3=1000;
    add(num3);         // in this, value of num3 is being only copied in 'a'.Therefore, they acquire different locations in memory.
    cout<<&num3;

    int num7=100;
    add1(num7);       // in this, both acquire same location in memory.
    cout<<&num7;

    print(100);      // you can see the benifits of " default parameter value".It is working 
    print(10,30);    //in this num10 has been assigned with new value.
    print(10,20,30); //in this num10 and num11 have been assigned wjith new values 

}