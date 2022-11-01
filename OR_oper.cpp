#include <iostream>
using namespace std;
int main(){
    int x,z;
    cout<<"Enter a no. less than 5 or greater than 10 \n";
    cin>>x;

    if (x<5 || x>10)
        cout<<x<<" --> it is less than 5 or greater than 10 \n";
    else
        cout<<"Wrong no.";
    
    cout<<"Enter a no. divisible by 3 or 5 \n";
    cin>>z;
    if (z%3==0 || z%5==0)
        cout<<z<<" --> it is divisible by 3 or 5 \n";

}   
