// // Question 1
// #include<iostream>
// using namespace std;

// int main(){
//     int x;
//     int y;
//     cout<<"Enter an first"<<endl;
//     cin>>x;
//     cout<<"Enter second number"<<endl;
//     cin>>y;
//     cout<<(x==y)?1:0;
//     return 0;
// }

// // Question 2
// #include<iostream>
// using namespace std;

// int main(){
//     int x;
//     int y;
//     cout<<"Enter a number"<<endl;
//     cin>>x;
//     cout<<"Enter another number"<<endl;
//     cin>>y;
//     cout<<((x < 50)&(x<y))?1:0;
//     return 0;
// }

// // Question 4
// #include<iostream>
// using namespace std;

// int main(){
//     int x,first,second,third,forth,fifth,sum;
//     cout<<"Writte a five digits number"<<endl;
//     cin>>x;
//     first=x/10000;    // to take first digit ,i.e., 1 out of x
//     x=x%10000;        // to assign 2345 for x
//     second=x/1000;    // to take secind digit ,i.e., 2 out of x 
//     x=x%1000;         // to assign 345 for x
//     third=x/100;      // to take third digit ,i.e., 3 out of x
//     x=x%100;          // to assign 45 for x
//     forth=x/10;       // to take forth digit ,i.e., 4 out of x
//     fifth=x%10;
//     sum=first+forth;
//     cout<<"sum of first and forth digits = "<<sum; 
//     return 0;
// }

// Question 5
// #include<iostream>
// using namespace std;

// int main(){
//     int x,first,second,third,sum;
//     cout<<"Assign a three digits number to a"<<endl;
//     cin>>x;
//     first=x/100;    // to assign first digit to variable 'first'
//     x%=100;         // to assign last two digits to x
//     second=x/10;    // to assign second digit to variable 'second'
//     x%=10;          // to assign third digit to x
//     third=x;
//     sum=first+second+third;
//     cout<<"sum of digits of a = "<<sum;
//     return 0;
// }

// Question 6

#include<iostream>
using namespace std;

int main(){
    int x,y;
    cout<<"Enter a number"<<endl;
    cin>>x;
    cout<<"Enter another number"<<endl;
    cin>>y;
    cout<<" x+y = "<<x+y<<endl;
    cout<<" x-y = "<<x-y<<endl;
    cout<<" x*y = "<<x*y<<endl;
    cout<<" x/y = "<<x/y<<endl;
    cout<<" y-x = "<<y-x<<endl;
    cout<<" y/x = "<<y/x<<endl;
    cout<<" x%y = "<<x%y<<endl;
    cout<<" y%x = "<<y%x<<endl;

    return 0;
}