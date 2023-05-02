#include <iostream>
using namespace std;

/* for Problem-1 */
int f1(int n){
    if (n>=0 and n<=9)
    {
        return n;
    }
    int ans = f1(n/10) + (n%10);
    return ans;
}

/* for Problem-2, method-1 */
int f2(int p,int q){
    if (q == 0)
    {
        return 1;
    }
    int ans = f2(p,q-1)*p;
    return ans;
}

/* for Problem-2, method-2 */
int f3(int p,int q){
    
    if(q == 0){return 1;}

    // when q is even 
    if (q%2 == 0){
        int ans = f3(p,q/2);
        return (ans*ans);
    }
    // when q is odd
    else
    {
        int ans = f3(p,(q-1)/2);
        return (ans*ans)*p; // we multiplied p at this because we have to multiply it to the result after its squaring
    }
}

int main(){

    /* Problem-1 */
    /* To find sum of digitd of an integer 'n' using recursion method */
    cout<<"Enter an integer: ";
    int n1;cin>>n1;
    int result1 = f1(n1);
    cout<<"Sum of digits of "<<n1<<" = "<<result1<<endl;


    /* Problem-2 */
    /* To calculate p^q */
    cout<<"Enter p: ";
    int p;cin>>p;
    cout<<"Enter q: ";
    int q;cin>>q;

    // Method-1
    int result2 = f2(p,q);
    cout<<"Using method 1:\n";
    cout<<"   P^q = "<<result2<<endl;

    // Method-2
    int result3 = f3(p,q);
    cout<<"Using method 2:\n";
    cout<<"   P^q = "<<result3<<endl;




}