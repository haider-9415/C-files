#include <iostream>
using namespace std;
int main(){

    /* Proble 1 */
    /* Multiply tow matrices. remember 'r2' = 'c1' */
    
    // cout<<"Enter no. of rows and columns for first metrix \n";
    // int r1,c1;
    // cin>>r1>>c1;
    // cout<<"Enter elements for the first \n";
    // int arr1[r1][c1];
    // for (int i = 0; i <r1 ; i++)
    // {
    //     for (int j = 0; j < c1; j++)
    //     {
    //         cin>>arr1[i][j];
    //     }
    // }

    // cout<<"Enter no. of rows and size for second metrix \n";
    // int r2,c2;
    // cin>>r2>>c2;
    // cout<<"Enter elemnts for the second \n";
    // int arr2[r2][c2];

    // for (int i = 0; i < r2; i++)
    // {
    //     for (int j = 0; j < c2; j++)
    //     {
    //         cin>>arr2[i][j];
    //     }
    // }

    // // to calculate
    // if (r2 == c1)
    // {
    //     int ans_array[r1][c2];
    //     for (int i = 0; i < r1; i++)
    //     {
    //         for (int j = 0; j < c1; j++)
    //         {
    //             int ans = 0;
    //             for (int k = 0; k < r2; k++)
    //             {
    //                 ans += arr1[i][k]*arr2[k][j];
    //             }
    //             ans_array[i][j] = ans;
    //         }
    //     }

    //     // to print the result
    //     cout<<"Multiplication of tow matrices of size "<<r1<<"x"<<r2<<endl;
    //     for (int i = 0; i < r1; i++)
    //     {
    //         for (int j = 0; j < c2; j++)
    //         {
    //             cout<<ans_array[i][j]<<" ";
    //         }
    //         // to make row wise
    //         cout<<endl;
            
    //     }
    // }
    // else {
    //     cout<<"it is not possible. because 'r2' != 'c1'";
    // }




    /* Problem 2 */
    /* Transpose a given matrix */

    cout<<"Enter no. of rows: ";
    int r; cin>>r;
    cout<<"Enter no. of columns: ";
    int c; cin>>c;
    
    int arr3[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>arr3[i][j];
        }
    }

    int transpose_array[c][r];
    for (int j = 0; j < c; j++)
    {
        for (int i = 0; i < r; i++)
        {
            transpose_array[j][i] = arr3[i][j];
        }
    }

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout<<transpose_array[i][j]<<" ";
        }
        cout<<endl;
    }
    
    

    

    return 0;
    
    
    
    
}