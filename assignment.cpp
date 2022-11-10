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



/* To find all prime numbers between a and b */



int main(){
    square(10);

    radius(3);

    age(12);
    age(20);

    odd(1,10);
    odd(100,200);


}