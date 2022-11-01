#include<iostream>
using namespace std;

int main(){
    int x=10,y=20,z=30;

    cout<<"Logical AND"<<endl;
    cout<<((x<y)&&(y<z))<<endl; //1
    cout<<((x>y)&&(y<z))<<endl; //0
    cout<<((x>y)&&(y>z))<<endl; //0

    cout<<"Logical OR"  <<endl;
    cout<<((x<y)||(y<z))<<endl; //1
    cout<<((x>y)||(y<z))<<endl; //1
    cout<<((x>y)||(y>z))<<endl; //0

    cout<<"Logical NOT"<<endl;
    cout<<(!(x<y))<<endl; //0
    cout<<(!(x>y))<<endl; //1
    cout<<(!(x<z))<<endl; //0
    cout<<(!(z<y))<<endl; //1

    return 0;
}