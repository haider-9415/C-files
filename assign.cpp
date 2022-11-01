#include<iostream>
using namespace std;
int main(){

    // Question 1
    // int x,y;
    // cout<<"Enter length \n";
    // cin>>x;
    // cout<<"Enter breadth \n";
    // cin>>y;

    // if (x==y){
    //     cout<<"It is a square";
    // }
    // else{
    //     cout<<"It is a rectangle";
    // }
    
    // Question 2
    // absolute value means a value without its sign

    // int c;
    // cout<<"Enter a no. \n";
    // cin>>c;
    // if (c<0){
    //     c*=-1;
    //     cout<<c;
    // }
    // else{
    //     cout<<c; 
    // }   

    //Question 3
    // int S_P,C_P,profit,loss;
    // cout<<"Enter selling price \n";
    // cin>>S_P;
    // cout<<"Enter cost price \n";
    // cin>>C_P;

    // if (S_P>C_P){
    //     profit=S_P-C_P;
    //     cout<<"Profit = "<<profit;
    // }
    // else if (C_P>S_P){
    //     loss=C_P-S_P;
    //     cout<<"Loss = "<<loss;
    // }
    // else{
    //     cout<<"No profit no loss";
    // }

    // Questioin 4

    // int pos;
    // cout<<"Enter an integer \n";
    // cin>>pos;

    // if (pos>=0){
    //     cout<<"Well Done";
    // }

    // Question 5

    char op;
    float x,y;
    cout<<"Enter an operator (+,-,*,/) \n";
    cin>>op;
    cout<<"Enter two numbers \n";
    cin>>x>>y;

    switch (op)
    {
    case '+':
        cout<<x+y;
        break;
    case '-':
        cout<<x-y;
        break;
    case '*':
        cout<<x*y;
        break;
    case '/':
        cout<<x/y;
        break;
    default:
        cout<<"operator is not vallid";
        break;
    }

    // // Question 6
    // int x;
    // cout<<"Enter your marks \n";
    // cin>>x;

    // if (x<30 && x>0){
    //     cout<<"F";
    // }
    // else if (x>=30&&x<40){
    //     cout<<"E";
    // }
    // else if (x>=40&&x<50){
    //     cout<<"D";
    // }
    // else if (x>=50&&x<60){
    //     cout<<"C";
    // }
    // else if (x>=60&&x<70){
    //     cout<<"B";
    // }
    // else if (x>=70&&x<80){
    //     cout<<"B+";
    // }
    // else if (x>=80&&x<90){
    //     cout<<"A+";
    // }
    // else if (x>=90&&x<100){
    //     cout<<"A+";
    // }
    // else{
    //     cout<<"Enter your marks";
    // }
}