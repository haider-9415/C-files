#include <iostream>
using namespace std;

/* For problem 1 */
int f1(int x, int y){

    if (y > x) { return f1(y,x); }
    if (y == 0){ return x;       }
    return (f1(y,x-y));
}

// this function is to caculate x^y
int power(int x,int y){
    if (y == 0)
    {
        return 1;
    }
    int ans = power(x,y-1)*x;
    return ans;
}

/* For problem 2 */
int f2(int n, int d){
    if (n == 0){ return 0; }

    int ans = power(n%10,d) + f2(n/10,d);
    return ans;
}

/* For problem 3 */
int f3(int *h, int n,int i){
    
    if (i == n-1)
    {
        return 0;
    }
    if (i == n-2)
    {
        return f3(h,n,i+1)+abs(h[i] - h[i+1]);
    }

    return min(f3(h,n,i+1) + abs(h[i] - h[i+1]) , f3(h,n,i+2) + abs(h[i] - h[i+2]));
    
    
}

int main(){

    /* problem 1 */
    /* find H.C.F of 'a' and 'b' */
    // cout<<"Enter a: ";
    // int x;cin>>x;
    // cout<<"Enter b: ";
    // int y;cin>>y;
    // cout<<"H.C.F. of "<<x<<" and "<<y<< " = "<<f1(x,y);


    /* problem 2 */
    /* is the no. 'n' an armstrong or not */
    // cout<<"Enter n: ";
    // int n;cin>>n;
    // int d = 0;
    // int temp = n;
    // // to find 'd'
    // while (temp > 0)
    // {
    //     temp /= 10;
    //     d++;
    // }

    // int result = f2(n,d);
    // if (result == n)
    // {
    //     cout<<"YES";
    // }
    // else
    // {
    //     cout<<"NOT";
    // }



    /* Problem 3 */
    /* Frog jump problem */

    int arr[] = {10,30,40,20};
    int n = 4;
    cout<<f3(arr,n,0);
    
    


}