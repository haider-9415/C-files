#include <iostream>
using namespace std;

/* Function to find squares of first n natural numbers */
int square(int n){
    cout<<"Square of first "<<n<<" natural numbers = ";
    for (int i = 1; i <= n; i++)
    {
        int ans1=0;
        ans1=i*i;
        cout<<ans1<<",";
    }
    cout<<endl;
}



/* To find area and circumference of a circle based on its given radius */
int radius(int r){
    // to find area
    cout<<"Area of the circle of radius "<<r<<" = "<<3.14*r*r<<endl;
    // to find circumference
    cout<<"Circumference of the circle of radius "<<r<<" = "<<2*3.14*r<<endl;

}



/* to find a person is eligible to vote or noton the basis of the age of the person */
int age(int n){
    if (n>=18)
    {
        cout<<"You are eligible to vote"<<endl;
    }
    else {
        cout<<"You are not eligible to vote"<<endl;
    }
}




/* To find all odd numbers between a and b */
int odd(int a,int b){
    cout<<"All odd numbers between "<<a<<" and "<<b<<" = ";
    for (int i = a; i <= b; i++)
    {
        if ((i%2)!=0)
        {
            cout<<i<<",";
        }
    }
    cout<<endl;
}



/* To find all prime numbers between 'a' and 'b' */

int prime(int a , int b ){
    cout<<"All prime nubers between "<<a<<" and "<<b<<": ";
    for (int i = a+1 ; i < b; i++)
    {
        // to print 2 if 'a = 1'
        if (i==2)
        {
            cout<<2<<",";
        }
        // to extract all odd numbers, because, all prime numbers are odd numbers and 2 is the only even number that is prime number
        if (i%2 != 0)
        {
            // if 'x' is a prime number then 'x%1==0' and 'x%X==0', therefor, 'j=2' and 'j<i'
            int j = 2;
            for (; j < i; j++)
            {
                // to check that 'i' is divisible by 1 and itself only
                if (i%j != 0)
                {
                    continue;
                }
                // if 'i' is not divisible by 1 and itself only
                break;

            }
            // to print 'i' if it is a prime number
            if (j == i)
            {
                cout<<i<<",";
            }
        }   
    }
    cout<<endl;
}



int main(){
    square(10);
    cout<<endl;

    radius(3);
    cout<<endl;

    age(12);
    age(20);
    cout<<endl;

    odd(1,10);
    odd(100,200);
    cout<<endl;
    
    prime(1,100);
    prime(2,50);
    prime(11,39);
    cout<<endl;


}
