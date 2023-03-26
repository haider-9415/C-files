#include <iostream>
using namespace std;
int main(){

    // accessing the address of a variable
    int a = 100;
    cout<<"Address of a: "<<&a<<endl;


    // storing the address in a pointer
    int x = 123456789;
    int *ptr1 = &x;
    cout<<"Address of x: "<<ptr1<<endl;

    float z = 100.001;
    float* ptr2 = &z;
    cout<<"Address of z: "<<ptr2<<endl;

    char p = '$';
    char * ptr3 = &p;
    cout<<"Address of p: "<<ptr3<<endl;

    
    /* if we only decleare a pinter then it stores random address but
       we can update it after. */
    int *ptr4;
    cout<<"Random address: "<<ptr4<<endl;

    
    // updating the pointer 'ptr4'
    int y = 120;
    ptr4 = &y;
    cout<<"Address of y: "<<ptr4<<endl;


    int num = 123987;
    int *ptr5 = &num;
    int *ptr6 = ptr5;
    cout<<"In pointer ptr5: "<<ptr5<<endl;
    cout<<"In pointer ptr6: "<<ptr6<<endl;



    // Accessing the data through a pointer

    cout<<"Value present at the address stored in ptr1: "<<*ptr1<<endl;
    cout<<"Value present at the address stored in ptr2: "<<*ptr2<<endl;
    cout<<"Value present at the address stored in ptr3: "<<*ptr3<<endl;
    cout<<"Value present at the address stored in ptr4: "<<*ptr4<<endl;
    cout<<"Value present at the address stored in ptr5: "<<*ptr5<<endl;
    cout<<"Value present at the address stored in ptr6: "<<*ptr6<<endl;


    // updating values
    x = 987654321;
    cout<<"Updated value of x: "<<x<<endl;
    cout<<"Value present at the address stored in ptr1: "<<*ptr1<<endl;


    // updating values using pointers
    *ptr1 = 1020304050;
    cout<<"Updated value of x using pointer: "<<x<<endl;
    cout<<"Value present at the address stored in ptr1: "<<*ptr1<<endl;

    *ptr2 = 200.002;
    cout<<"Updated value of z using pointer: "<<z<<endl;
    cout<<"Value present at the address stored in ptr2: "<<*ptr2<<endl;


}
