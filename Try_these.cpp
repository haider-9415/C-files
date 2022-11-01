#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Write a no."<<endl;
    cin>>x;

    // if (x%3==0 && x%5==0){
    //     cout<<"FizzBuzz \n";    
    // }

    // else if (x%3==0 || x%5==0){
    //     if (x%3==0){
    //     cout<<"Fizz";
    //     }

    //     if (x%5==0){
    //         cout<<"Buzz \n";        
    //     }
    // }

    // else
    //     cout<<x;

    if (!(x%5==0 || x%7==0)){
        cout<<x<<" --> it is your output \n";
    }
    else
        cout<<"Try again";
}

    
