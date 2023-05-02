#include <iostream>
using namespace std;

int fact(int n){
    if (n == 1)
    {
        return 1;
    }
    return n*fact(n-1); 
}

int fab(int n){

    // base case
    if (n==0 or n==1)
    {
        return n;
    }
    int ans = fab(n-1)+fab(n-2);
    return ans;
}

int main(){

    /* finding factorial using recursion method */
    cout<<"Enter a natural number: ";
    int n1;cin>>n1;
    int result1 = fact(n1);
    cout<<n1<<"! = "<<result1<<endl;



    /* finding nth term of the fibonacci series using recursion method */
    // remember it does not count 1st term ,i.e., 0
    cout<<"Enter the nth term: ";
    int n2;cin>>n2;
    int result2 = fab(n2);
    cout<<n2<<"th term = "<<result2;


}