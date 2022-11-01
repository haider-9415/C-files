#include <iostream>
using namespace std;
int main(){
    int score;
    cout<<"What is your percentage ? \n";
    cin>>score;
    if (score>=33)
        if (score>=80)
            cout<<"Gracefully pass";
        else
            cout<<"Pass";
    else
        cout<<"Fail";
}