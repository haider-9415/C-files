#include <iostream>
#include <vector>
using namespace std;

/* this function is for problem 4 */

// int largestelementindex(int arr3[],int size){
//     int max= INT32_MIN;
//     int maxindex=-1;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr3[i]> max) // 
//         {
//             max=arr3[i]; // in this, elements of array "arr4" is being stored after each other
//             maxindex=i;  // no. of index is bieng stored and it is returning the last no. of index which is obtained after the condition is false
//         }
//     }
//     return maxindex;    
// }


/* this function is also for problem 4 but it is shorter than that.
   Using this function we can find second largest element in 
   one statement and that statement is at line 164 */

// int secondlargestelement(int arr5[],int size1){
// int max=INT32_MIN;
// int secondmax=INT32_MIN;

// // in this loop, value of max will be 7
// for (int i = 0; i < size1; i++)
// {
//     if (arr5[i]>max)
//     {
//         max=arr5[i];
//     }
// }

// // in this loop, value of secondmax will be 6 and it will be returned 
// for (int i = 0; i < size1; i++)
// {
//     if (arr5[i]>secondmax && arr5[i]!=max)
//     {
//         secondmax=arr5[i];
//     }
// }

// return secondmax;
// }


int main(){

    /* Problem ---> 1 */ 
    /*To find number of pairs of any two values which sum is equal x */
    
    cout<<"Enter the values for the array \n ";
    int arr[10];
    // this loop is to take values for the array
    for (int i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }
    int x1;
    cout<<"Enter the number x \n ";
    cin>>x1;
    int num_of_paires=0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i+1; j < 10; j++)
        {
            if (arr[i]+arr[j]==x1){
            num_of_paires++;
            }
        }        
    }
    cout<<"no. of the pairs = "<<num_of_paires;




    /* Problem ---> 2 */
    /* to find triplets which sum is equal to a no. x */

    int arr1[10]={};
    int num_of_triplets=0, x;
    cout<<"Enter the values for an array \n";
    for (int i = 0; i < 10; i++)
    {
        cin>>arr1[i];
    }
    int x2;
    cout<<"Enter the no. x \n";
    cin>>x2;
    for (int i = 0; i < 6; i++)
    {
        for (int j = i+1; j < 6; j++)
        {
            for (int k = j+1; k < 6; k++)
            {
                if (arr1[i]+arr1[j]+arr1[k]==x2)
                {
                    num_of_triplets++;
                }
            }            
        }        
    }
    cout<<"no. of the triplets = "<<num_of_triplets;
    
    

    
    /* Problem ---> 3 */
    /* this program is to find a unique no. if remaining elements 
       are present two times*/

    int arr2[]={2,3,1,3,8,2,1};
    int unique;
    for (int i = 0; i < 7; i++)
    {
        for (int j = i+1; j < 7; j++)
        {
            if (arr2[i]==arr2[j]){
                arr2[i]=arr2[j]= -1; // -1 is not necessary if it is  the unique no. then we can use another
            }
            else
            {
                unique=arr2[i];
            }            
        }
    }
    cout<<"The unique no. = "<<unique;





    /* Problem ----> 4 */
    /* to find second largest element in an array */
    /* first function is working on these statements*/

    int arr4[]{2,3,5,7,6,1,2,1};
    int size=8;

    // in "ind_of_fir_lar" and "in ind_of_sec_lar", that index no. is being stored which "maxindex" will return
    
    // it to find first greatest element
    // when "max=7" and "arr3[i]=6" then 6 and 1 remained same and 2,3,5 and 7 have been converted into -1
    int ind_of_fir_lar=largestelementindex(arr4,size);
    arr4[ind_of_fir_lar]= -1;

    // it is to find second greatest element
    // when "max=6" and "arr3[i]=1" then "maxindex = 4" and it will return 4
    int ind_of_sec_lar=largestelementindex(arr4,size);
    cout<<"In array {2,3,5,7,6,1,2,1} \n";
    cout<<"using first function, \n the second largest element = "<<arr4[ind_of_sec_lar]<<endl;


    
    
    /* second function is working on these two statements */

    int arr6[]{2,3,5,7,6,1,2,1};
    cout<<"using second function \n the second largest element = "<<secondlargestelement(arr6,size)<<endl;


        
    /* if duplicates of first largest element are present in an array 
       then we use loop which convert all duplicates in -1 */

    int arr7[]{2,3,5,7,6,1,5,7};
    int fir_lar_ele1=arr7[ind_of_fir_lar];
    for (int i = 0; i < size; i++)
    {
        if (arr7[i]==fir_lar_ele1)
        {
            arr7[i]=-1;
        }  
    }
    int ind_of_sec_lar1=largestelementindex(arr7,size);
    cout<<"On presenting duplicate values \n ";
    cout<<"the second largest element = "<<arr7[ind_of_sec_lar1];




    
   /* Problem 5 */
   /* To rotate an array 'a' by 'k' steps where 'k' is non-negative and
      'n' is the size of the array 'a' */

   int arr8[8]; // it is the original array
   int n=8;
   cout<<"Enter the values for the array \n";
   for (int i = 0; i < n; i++)
   {
     cin>>arr8[i];
   }

   int k;
   cout<<"Enter,how many times do you want to rotate the array ? \n";
   cin>>k;
   k%=n;

   int ans_array[n]; // this array will show our answer
   int j=0; // 'j' will be used to insert values in 'ans_array'

   // this loop is to insert last k elements in ans_array
   for (int i = n-k; i < n; i++)
   {
     ans_array[j]=arr8[i];
     j++;
   }

   // this loop is to insert first n-k elements in ans_array
   for (int i = 0; i <= k; i++)
   {
     ans_array[j]=arr8[i];
     j++;
   }

   // this loop is to show the elements of ans_array
   cout<<"After rotation by "<<k<<" steps, the array = ";
   for (int i = 0; i < n; i++)
   {
      cout<<ans_array[i]<<",";
   }
   

   
}