#include <iostream>
using namespace std;
int main(){

    /* Take the values for x and y and add them using pointers*/
    
    int x,y;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter y: ";
    cin>>y;

    int *ptrx = &x;
    int *ptry = &y;
    
    int result;
    int *ptr_re = &result;

    *ptr_re = *ptrx+*ptry;
    cout<<"x + y = "<<*ptr_re;
}
