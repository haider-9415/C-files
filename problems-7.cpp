#include <iostream>
#include <vector>
using namespace std;

void f1(string &str,int i,string result,vector<string> &list){
    // base case
    if (i == str.length())
    {
        // to store subsequences of str in list
        list.push_back(result); 
        return;
    }
    // if the ith character of str is picked
    f1(str,i+1,result+str[i],list);
    // if the ith character of str is not picked
    f1(str,i+1,result,list);
}

void f2(string &str,int i,string result,vector<string> &list,vector<string> &v){

    if (i == str.length())
    {
        list.push_back(result);
        return;
    }
    int digit = str[i] -'0';
    if (digit <= 1)
    {
        f2(str,i+1,result,list,v);
        return;
    }
    for (int j = 0; j < v[digit][j]; j++)
    {
        f2(str,i+1,result+v[digit][j],list,v);
    }
    
}

int main(){

    /* Problem 1 */
    /* Find subsequences of a string "abcd" */
    /* subsequences of a astring are like subsets a of a set */
    // string str = "abcd";
    // int i=0;
    // string result = "";
    // vector<string> list;
    // f1(str,i,result,list);
    // cout<<"Subsequences of string (abcd) = ";
    // for (int i = 0; i < list.size(); i++)
    // {
    //     cout<<i<<":"<<list[i]<<" ";
    // }
    // cout<<"\n\n";



    /* Problem 2 */
    /* find all possible combinations of alphabets obtained by a no. 
       from 0 to 1 in a keypad mobile */
    vector<string> v(10);
    //   0  1    2     3     4     5     6     7      8     9
    v = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    cout<<"Enetr a digit: ";
    string str;cin>>str;
    string result = "";
    vector<string> list;
    int i = 0;
    f2(str,i,result,list,v);
    for (int i = 0; i < list.size(); i++)
    {
        cout<<i<<":"<<list[i]<<" ";
    }
    
    
    



}