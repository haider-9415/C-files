#include <iostream>
using namespace std;

void swap_1(int x , int y){

    int z = x;
    x=y;
    y=z;
}

void swap_2(int &x , int &y){

    int z = x;
    x=y;
    y=z;
}

void swap_3(int *a , int *b){

    int z = *a;
    *a=*b;
    *b=z;
}

void find_f_l(string s,char ch,int *first,int *last){

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ch)
        {
            *first = i;
            break;
        }
    }

    for (int i = s.size(); i > 0; i--)
    {
        if (s[i] == ch)
        {
            *last = i;
            break;
        }
    }
    
}



int main(){

    // call by value
    // in this, copies of variables are created not the actuall variables
    // therefore, 'x' and 'y' in the function 'swap_1' are not the 'x' and 'y' in function 'main'
    int x = 10;
    int y = 20;

    swap_1(x,y);
    cout<<x<<" and "<<y<<endl;

    //call by reference
    //in this, actuall variables are sent to the function
    //therefore, 'x' and 'y' in the function 'swap_2' are the 'x' and 'y' in function 'main'
    swap_2(x,y);
    cout<<x<<" and "<<y<<endl;


    //call by reference using pointers
    /*in this, 'p1' and 'p2' have the memory locations of 'a' and 'b' present in 
      function 'main' respectively which are sent to pointer 'a' and 'b' in function 'swap_3' */
    int a = 100;
    int b = 200;
    int *p1 = &a;
    int *p2 = &b;
    cout<<"before swaping:  \n";
    cout<<a<<" and "<<b<<endl;
    swap_3(p1,p2);
    cout<<"swaping using pointers:  \n";
    cout<<a<<" and "<<b<<endl;



    // finding first and last occurrence of a character using pointers

    string s = "aaadac";
    char ch = 'a';
    int first = -1;
    int last = -1;

    int *pf = &first;
    int *pl = &last;

    find_f_l(s,ch,pf,pl);
    cout<<"Using pointers   "<<endl;
    cout<<"first occurrence at: "<<*pf<<endl;
    cout<<"last occurrence at: "<<*pl<<endl;

    /* actuall values of 'first' and 'last' variables will also be changed
       because we have sent the address in the function by call-by-reference */

    cout<<"Using variables   "<<endl;
    cout<<"first occurrence at: "<<first<<endl;
    cout<<"last occurrence at: "<<last<<endl;

 

}