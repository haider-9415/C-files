#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;

    cout<<"Enter the elements for the vectors \n ";
    // this loop is to add elements in 'v' vector
    for (int i = 0; i < 5; i++){
        int num1;
        cin>>num1;
        v.push_back(num1);
    }

    // this loop is to print elements of 'v' vector
    cout<<"The elements: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;


    // while loop , to print elements of 'v' vector
    int num2=0;
    cout<<"The elements: ";
    while (num2<v.size()){
        
        cout<<v[num2++]<<" "; // first it prints v[i] an then increasee i by 1. It is post-increament operator
    }
    cout<<endl;

    // Now, in forth index, 49 will exist
    v.insert(v.begin()+3,49); // ' v.begin()+3 ' means forth position from starting
    cout<<"The elements: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // In this, second last element will be removed
    v.erase(v.end()-2); // ' v.erase()-2 ' means second position from ending
    cout<<"The elements: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    
    
}