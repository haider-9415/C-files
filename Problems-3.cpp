#include <iostream>
using namespace std;

string f1(string &str,int ind,int n){

    // base case
    if (ind == n)
    {
        return "";
    }
    string s = "";
    s += str[ind];
            // self work                   // assumption  
    return ((str[ind]=='a') ? "" : s) + f1(str,ind+1,n);
}

bool f2(int num,int *temp){
    if (num >=0 and num <= 9)
    {
        int templ = (*temp)%10;
        (*temp) /= 10;
        return (num == templ);
    }
    bool result = (f2(num/10,temp) and (num%10) == ((*temp) % 10));
    (*temp) /= 10;
    return result;
}

int main(){

    /* Problem 1 */
    /* Remove all occurrence of 'a' from the string "abcax" */
    string str1 = "abcax";
    int n = 5; // length of the string
    cout<<f1(str1,0,5)<<endl;



    /* Problem 2 */
    /* Check the given number is palindrome or not */
    cout<<"Enter a number: ";
    int num;cin>>num;
    int num_temp = num;
    int *temp = &num_temp;
    int result = f2(num,temp);
    if (result == 1)
    {
        cout<<"It is a palindrome."<<endl;
    }
    else
    {
        cout<<"It is not a palindrome."<<endl;
    }
    

}