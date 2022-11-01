#include<iostream>
using namespace std;
int main(){
    int per;
    cout<<"Enter your percentage"<<endl;
    cin>>per;
    if (per>=80)
        cout<<"Your grade is 'A'"<<endl;
    else if (per>=60)
        cout<<"Your grade is 'B' \n";
    else if (per>=50)
        cout<<"Your grade is 'C' \n";
    else
        cout<<"Your grade is 'D'";
}