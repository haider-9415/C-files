#include <iostream>
using namespace std;


/* These are called function prototype. These are used when we define a function after we call it */

int mult(int a, int b); 
string name(string x);


int main(){

    mult(10,20);

    name("Haider");

}



/* We can creat a function after we call it. In this case, we need to declare function prototype */

int mult(int a, int b){
        int result = a*b;
        cout<<result<<endl;
        return result;
}

string name(string x){
    cout<<x;
    return x;
}