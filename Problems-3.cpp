#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

/* Method 1 */
/* This function is for problem 1 */
// void sort1(vector<int> &v){
//     int count_zeroes=0;

//     // it is to count how many zeroes are in given array
//     for(int ele:v){
//         if (ele==0)
//         {
//             count_zeroes++;
//         }
//     }

//     // to shift all zeroes in starting of the given array and in remaining places ones
//     for (int  i = 0; i < v.size(); i++)
//     {
//         if (i< count_zeroes)
//         {
//             v[i]=0;
//         }
//         else
//         {
//             v[i]=1;
//         }   
//     }
    
//     // to print the result
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v[i]<<",";
//     }
//     cout<<endl;
// }

/* Method 2 */
/* This function is also for problem 1 */

// void sort2(vector <int> &v){
//     int left_pointer=0;
//     int right_pointer=v.size()-1; // 'v.size()-1' is to store last index no. in the variable

//     while (left_pointer<right_pointer)
//     {
//         // to swap 1 from 0 on moving left to right and right to left
//         if (v[left_pointer]==1 && v[right_pointer]==0)
//         {
//             // '++' post-increament operator has been used to assign before increasing. We have to do it to move form left to right
//             v[left_pointer++]=0;
//             // '--' post-decreament operator has been used to assign before decreasing. We have to do it to move from right to left
//             v[right_pointer--]=1;
//         }
        
//         // to move form left to right
//         if (v[left_pointer]==0)
//         {
//             left_pointer++;
//         }
        
//         // to move from right to left
//         if (v[right_pointer]==1)
//         {
//             right_pointer--;
//         }
//     }

//     // to print the result
//     cout<<"After sorting: ";
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v[i]<<",";
//     }
//     cout<<endl;
// }



/* this function is for problem 2 */
// void odd_even(vector<int> &v){
//     int left_pointer=0;
//     int right_pointer=v.size()-1;

//     while (left_pointer < right_pointer)
//     {
//         // it is to swap to values
//         if (v[left_pointer]%2!=0 && v[right_pointer]%2==0)
//         {
//             // swap is a funciton to swap to values
//             swap(v[left_pointer],v[right_pointer]);
//             // after functioning, to move form left to right
//             left_pointer++;
//             // after functioning, to move from right to left
//             right_pointer--;
//         }
        
//         // only to move form left to right
//         if (v[left_pointer]%2==0)
//         {
//             left_pointer++;
//         }
        
//         // onyl to move from right to left
//         if (v[right_pointer]%2!=0)
//         {
//             right_pointer--;
//         }
//     }

//     // to print result
//     cout<<"The result: ";
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v[i]<<",";
//     }
//     cout<<endl;    
// }



/* this function is for problem 3 */
// void reverse(vector <int> v){
    
//     int j=0;
    
//     // it is the reverse vector 
//     vector <int> v1(10);

//     // this loop is to reverse the given vector
//     for (int i = v.size()-1; i >= 0 ; i--)
//     {
//         v1[j]=v[i];
//         j++;
//     }

//     // to print the result
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v1[i]<<",";
//     }   
// }



/* this functon is for problem 4 */
// void sort_square(vector <int> &v){
       
//    // squared values will be stored in this vector
//    vector <int> ans;
//    int left_pointer=0;
//    int right_pointer=v.size()-1;

//    // to store sqaured valuse of given vector in descending order
//    while (left_pointer <= right_pointer)
//    {
//        if (abs(v[left_pointer]) < abs(v[right_pointer]))
//        {
//            ans.push_back(v[right_pointer]*v[right_pointer]);
//            right_pointer--;
//        }
//        else
//        {
//            ans.push_back(v[left_pointer]*v[left_pointer]);
//            left_pointer++;
//        }
//    }

   // to convert the vector 'ans' in ascending order
//    sort(ans.begin(), ans.end());

//    // to print the result
//    for (int i = 0; i < ans.size(); i++)
//    {
//       cout<<ans[i]<<",";
//    }
     
// }



int main(){
    
    /* Problem 1*/
    /* sorting of an array consisting of 0s and 1s */
    
    // vector <int> v1(10);

    // // to obtain values of an array
    // cout<<"Enter the values for the vectors \n";
    // for (int i = 0; i < v1.size(); i++)
    // {
    //     cin>>v1[i];
    // }

    // // to call first function
    // sort1(v1);
    
    // // to call second function
    // sort2(v1);
    // cout<<endl;




    
    /* Problem 2 */
    /* Move all the even integers at beginning and all the odd numbers at ending
       it does not matter that in which order they are. */
       
    // vector <int> v2(10);
    
    // cout<<"Enter the values for the vector \n ";
    // // to obtain values of an array
    // for (int i = 0; i < v2.size(); i++)
    // {
    //     cin>>v2[i];
    // }
    
    // // to call the function created for problem 2
    // odd_even(v2);





    /* Problem 3 */
    /* reverse the valuse of a given vector */

    // values of the vector
    // cout<<"Enter the valuse for the vector \n ";
    // vector <int> v(10);
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cin>>v[i];
    // }
    // // to call the function
    // reverse(v);




   /* Problem 4 */
   /* convert a givne array in squares of its values in non-descending order. the values can be +ve or -ve
      but no value must nat be repeated  */

   // vector <int> v(6);
   // cout<<"Enter the valuse for the vector \n";
   // for (int i = 0; i < v.size(); i++)
   // {
   //     cin>>v[i];
   // }

   // // to call the function
   // sort_square(v);

   


    


    
    

    
    

    


    
}