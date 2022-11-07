#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v(5);

    /* To find last occurence of a number x in given vector*/


    cout<<"Enter the valus of the vector \n ";

    // this loop is to take values for vector
    for (int i = 0; i < v.size(); i++) // Because, index no. starts from 0 , therefor, i starts from 0 to less than no. of elements ,i.e., i<v.size()
    {
     cin>>v[i];
    }

    // method one
    cout<<"Enter the no. x to find its last occurence \n ";
    int n1;
    cin>>n1;
    int num1= -1; // if the no. x is not in the vector then -1 will be printed
    
    // this loop is to find the x
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i]==n1){
            num1=i;
        }
    }
    cout<<"Using method 1, index no. of given no. = "<<num1<<endl;

    // method two
    int num2=-1;
    
    // this loop is also to find the x
    for (int i = v.size()-1; i >= 0; i--) // 'v.size()-1', because, (no. of indexes in a vector) = (no. of elements in the vector) -1
    {
        if (v[i]==n1){
            num2=i;
            break;  // It is used ,because, in this case first x is the last x
        }
    }
    cout<<"Using method 2, index no. of given no. = "<<num2<<endl;

    
    /* To find first occurence of an element x in a vector, use braek
       keyword in method one and remove it from method two*/
       


    
    /* To count the number of occurence of a number x in a vector, in above program,
       assign num1 and num2 with 0, use num1++ and num2++ and remove break keyword from method 2*/    

     cout<<"Enter the valus of the vector \n ";

    // this loop is to take values for vector
    for (int i = 0; i < v.size(); i++) // Because, index no. starts from 0 , therefor, i starts from 0 to less than no. of elements ,i.e., i<v.size()
    {
     cin>>v[i];
    }

    // method one
    cout<<"Enter the no. x to find number of its occurence \n ";
    int n2;
    cin>>n2;
    int num3= 0;
    
    // this loop is to count occurence of x
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i]==n2){
            num3++;  // to count how many times the no. x has taken place
        }
    }
    cout<<"Using method one"<<endl;
    cout<<"Number of occurence of "<<n2<<" = "<<num3<<endl;

    // method two
    int num4=0;
    
    // this loop is also to count occurenece of x
    for (int i = v.size()-1; i >= 0; i--) // 'v.size()-1', because, (no. of indexes in a vector) = (no. of elements in the vector) -1
    {
        if (v[i]==n2){
            num4++; // to count how many times the no. x has taken place
        }
    }
    cout<<"Using method two"<<endl;
    cout<<"Number of occurence of "<<n2<<" = "<<num4<<endl;



    
    /* To count number of elements greater than number x in a vector, convert
       (v[i]==x) into (v[i]>x) in above program*/
    
     cout<<"Enter the valus of the vector \n ";

    // this loop is to take values for vector
    for (int i = 0; i < v.size(); i++) // Because, index no. starts from 0 , therefor, i starts from 0 to less than no. of elements ,i.e., i<v.size()
    {
     cin>>v[i];
    }

    // method one
    cout<<"Enter the no. x to find number of values greater than x \n ";
    int n3;
    cin>>n3;
    int num5 = 0;
    
    // this loop is to count the numbers greater than x 
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i]>n3){
            num5++;  // to count how many numbers greater than x are there
        }
    }
    cout<<"Using method one"<<endl;
    cout<<"Number of occurence of elements greater than "<<n3<<" = "<<num5<<endl;

    // method two
    int num6=0;
    
    // this loop is also to count the numbers greater than x 
    for (int i = v.size()-1; i >= 0; i--) // 'v.size()-1', because, (no. of indexes in a vector) = (no. of elements in the vector) -1
    {
        if (v[i]>n3){
            num6++; // to count how many numbers greater than x are there
        }
    }
    cout<<"Using method two"<<endl;
    cout<<"Number of occurence of elements greater than "<<n3<<" = "<<num6<<endl;





    /* to find difference between sum of odd elements from sum of even elements*/

    cout<<"Enter the values for vectors \n ";
    for (int i = 0; i < v.size(); i++)
    {
        cin>>v[i];
    }
    
    int ans=0;
    for (int i = 0; i < v.size(); i++)
    {
        if (i%2==0)
        {
            ans+=v[i];
        }
        else
        {
            ans-=v[i];
        }
    }
    cout<<"the sum = "<<ans;
    
}