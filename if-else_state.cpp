#include<iostream>
using namespace std;
int main(){
    int marks,x;
    char c;
    cout<<"What is your marks ?"<<endl;
    cin>>marks;
    if (marks>=35)
        cout<<"You are pass"<<endl<<endl;
    else
        cout<<"You are fail"<<endl<<endl;
    
    cout<<"Enter a no."<<endl;
    cin>>x;
    if (x%2==0)
        cout<<"It is even no."<<endl<<endl;
    else
        cout<<"it is odd no."<<endl<<endl;
    
    cout<<"Enter a character"<<endl;
    cin>>c;
    if (c=='a')
        cout<<"it is character 'a'"<<endl;
    else
        cout<<"It is not character 'a'";


    
}