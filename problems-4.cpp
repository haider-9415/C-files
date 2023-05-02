#include <iostream>
using namespace std;

/*For problem 1*/
// Method 1
void f1(int n1,int n2){
    // base case
    if (n1 > n2)
    {
        return;
    }
    // self work
    cout<<n1<<" ";
    // assumption
    f1(n1+1 , n2);
}
// Method 2
void f2(int n){
    //base case
    if (n < 1)
    {
        return;
    }
    // assumption
    f2(n-1);
    // self work
    cout<<n<<" ";
}

void f3(int n, int k){
    // base case
    if (k < 1)
    {
        return;
    }
    // assumption
    f3(n,k-1);
    // self work
    cout<<n*k<<" ";
}

int f4(int n){
    // base case
    if (n < 1)
    {
        return 0;
    }
            //assumption    self work
    int sum = f4(n-1) +    ((n%2 == 0)? (-n):(n));
    return sum;
    
}

int main(){

    /* Problem 1 */
    /* Find increasing sequence from 1 to n */
    int n1 = 1;
    cout<<"Enter an integer n: ";
    int n2;cin>>n2;
    
    cout<<"The increasing sequence \n";
    cout<<"   Using method 1: ";
    //method 1
    f1(n1,n2);
    cout<<endl;
    // method 2
    cout<<"   Using method 2: ";
    f2(n2);
    cout<<endl;


    /* Problem 2 */
    /* Find 'k' multiples of 'n' */
    cout<<"Enter n: ";
    int n3;cin>>n3;
    cout<<"Enter k: ";
    int k;cin>>k;
    cout<<k<<" multiples of "<<n3<<": ";
    f3(n3,k);
    cout<<endl;



    /* Problem 3 */
    /* Calculate sum of first n antural numbers with alternate signs */
    cout<<"Enter n: ";
    int n4;cin>>n4;
    int sum = 0;
    int result = f4(n4);
    cout<<"Sum of first "<<n4<<" natural numbers with altenate signs = "<<result;







}