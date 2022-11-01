#include <iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Write a no. greater than 5 and less than 10 \n";
    cin>>x;
    if (x>5 && x<10)
        cout<<"It is greater than 5 and less than 10 \n";
    else
        cout<<"Try again";
    
    cout<<"Write a no. divisible by 2 and 3 \n";
    cin>>y;
    if (y%2==0 && y%3==0)
        cout<< y <<" --> it is even and divisible by 3 \n";
    else
        cout<<"Write a no. that is even and divisible by 3";


    cout<<"Enter a no. divisible by 3 and 5 \n";
    cin>>z;
    if (z%3==0 && z%5==0)
        cout<<z<<" --> it is divisible by 3 and 5 \n";
    else
        cout<<"Wrong no.";
}    
