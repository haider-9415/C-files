#include <iostream>
#include <vector>
using namespace std;


/* This method is for problem 1 */

// void runningsum(vector <int> &v){

//     for (int i = 1; i < v.size(); i++) // the value at 0th index will be same therefore the loop starts from 1
//     {
//         v[i] += v[i-1]; // it will add a value with its previous value
//     }

//     // this loop is to print the result
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v[i]<<",";
//     }
//     cout<<endl;
//     return;
// }



/* This method is for problem 2 */

// void che_equ_pre_suf_sum(vector<int> &v1){

//     int total=0;
//     // this loop is to find total sum of the valuse of the given vector
//     for (int i = 0; i < v1.size(); i++)
//     {
//         total+=v1[i];
//     }

//     int prefix_sum=0;
//     int suffix_sum;
//     // this loop is to find sum of first part and sum of second part of the given vector
//     for (int i = 0; i < v1.size(); i++)
//     {
//         prefix_sum+=v1[i];
//         int suffix_sum = total - prefix_sum;

//         // this statement is to check "sum of first part = sum of second part" or not
//         if (prefix_sum == suffix_sum)
//         {
//             cout<<"in this prefix_sum = suffix_sum";
//             break;
//         }   
//     }
// }


int main(){

    /* Problem 1 */
    /* Print a given array with prefix sum without creating new array */
    // cout<<"Enter the valuse for the vector \n ";
    // vector<int> v(6);
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cin>>v[i];
    // }

    // // To call the function
    // runningsum(v);
    

    
    
    /* Problem 2 */
    /* divide a vector in two parts after each value to check that there is any one
       combination of "first part = second part" */
    
    // cout<<"Enter the values for the vector \n ";
    // vector<int> v1(6);
    // for (int i = 0; i < v1.size(); i++)
    // {
    //     cin>>v1[i];
    // }

    // che_equ_pre_suf_sum(v1);




    /* Problem 3 */
    /* Add the valuse from 'l' index no. to 'r' index no. such that
       no. of index should be start from 1 */

    cout<<"Enter the size of the vector \n";
    int n;cin>>n;
    cout<<"enter the valuse for the vector \n";
    // 0 will be at 0th
    vector<int> v2(n+1,0);

    // To store the valuse for the vector
    for (int i = 1; i <= n; i++)
    {
        cin>>v2[i];
    }

    // To calculate prefix sum
    for (int i = 1; i <= n; i++)
    {
        v2[i]+=v2[i-1];
    }

    cout<<"enter no. of queries \n";
    int queries;
    cin>>queries;

    while (queries--)
    {
        int l,r;
        cout<<"Enter value of 'l' \n";
        cin>>l;
        cout<<"Enter value of 'r' \n";
        cin>>r;

        int ans=0;
        // ans = (prefix sum to r) - (prefix sum to l-1) 
        ans= v2[r] - v2[l-1];
        cout<<endl<<ans<<endl;
    }
    
    
    


    

}