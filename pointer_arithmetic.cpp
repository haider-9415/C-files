#include <iostream>
using namespace std;
int main(){

    int n = 20;
    double dec = 1.01;

    cout<<"Size of int: "<<sizeof(n)<<endl;
    cout<<"Size of double: "<<sizeof(dec)<<endl;

    int *ptri = &n;
    double *ptrd = &dec;

    /* type int has the size of 4 bytes ,therefore, the pointer moves 4 bytes foreward 
       in increament 1 and moves 4 bytes backward in decreament 1*/
    cout<<"Address stored in ptri:\n";
    cout<<"   Before increament: "<<ptri<<"\n";
    cout<<"   After increament 1: "<<(ptri+1)<<endl;
    cout<<"   After increament 2: "<<(ptri+2)<<endl;
    cout<<"   After increament 3: "<<(ptri+3)<<endl;
    cout<<"   Before decreament:"<<ptri<<endl;
    cout<<"   After decreament 1: "<<(ptri-1)<<endl;
    cout<<"   After decreament 2: "<<(ptri-2)<<endl;
    cout<<"   After decreament 3: "<<(ptri-3)<<endl;
    // // type bouble has the size of 8 bytes ,therefore, the pointer moves 8 bytes foreward in increament 1 
    cout<<"Address stored in ptrd:\n";
    cout<<"   Before increament: "<<ptrd<<endl;
    cout<<"   After increament 1: "<<(ptrd+1)<<endl;
    cout<<"   After increament 2: "<<(ptrd+2)<<endl;
    cout<<"   After increament 3: "<<(ptrd+3)<<endl;
    cout<<"   Before decreament: "<<ptrd<<endl;
    cout<<"   After decreament 1: "<<(ptrd-1)<<endl;
    cout<<"   After decreament 2: "<<(ptrd-2)<<endl;
    cout<<"   After decreament 3: "<<(ptrd-3)<<endl;


}