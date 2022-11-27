#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

/* For problem 1 */

// Method 1
int row_with_max_one_1(vector<vector<int>> &vector){

    // to store max. number of 1
    int max_ones_1= INT32_MIN;
    // to store the row number which has max. no. of ones
    int row_number_1 = -1;
    
    for (int i = 0; i < vector.size(); i++)
    {
        for (int j = 0; j < vector[i].size(); j++)
        {
            
            if (vector[i][j] == 1)
            {
                // to store no. of ones in the ith row 
                /* No. of 1 = (column no. of that row which has 1) - (index no. where first 1 is) */
                int no_of_ones = vector[i].size() - j;
                // to check the ith row has max. no. of 1 than (i-1)th row or not
                if (no_of_ones > max_ones_1)
                {
                    max_ones_1 = no_of_ones;
                    row_number_1 = i;
                }
                // to go out from second loop ,i.e., to jump on next row
                break;
            }   
        }
    }
    return row_number_1;
}

// Method 2
int row_with_max_one_2(vector<vector<int>> &vector){

    // to store max. number of 1
    int left_most_one = INT32_MIN;
    // to store the row number which has max. no. of ones
    int row_number_2 = -1;

    // to find no. of ones in 0th row
    int j = vector[0].size()-1;
    while (j>=0 && vector[0][j]==1)
    {
        left_most_one = j;
        row_number_2 = 0;
        j--;
    }

    // to check no. of ones is more in (0 + 1)th row than 0th row or not
    for (int i = 1; i < vector.size(); i++)
    {
        while (vector[i][j]==1 && j>=0)
        {
            left_most_one = j;
            row_number_2 = i;
            j--;
        }
    }
    return row_number_2;
}


/* For problem 2 */
void rotatearray(vector<vector<int>> &vec2){

    // to transpose the 2D-array
    for (int i = 0; i < vec2.size(); i++)
    {
        // we will have to swap only half of matrix. Therefore, 'j < i'
        for (int j = 0; j < i; j++)
        {
            swap(vec2[i][j], vec2[j][i]);
        }
    }

    // to reverse the 2D-array array
    for (int i = 0; i < vec2.size(); i++)
    {
        reverse(vec2[i].begin(), vec2[i].end());
    }

    // to print the result
    cout<<"After rotation \n";
    for (int i = 0; i < vec2.size(); i++)
    {
        for (int j = 0; j < vec2.size(); j++)
        {
            cout<<vec2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

}




int main(){

    /* Problem 1 */
    /* find the row which have max. no. of 1 for that 2D-array which elements have
       only '0' and '1' and they are sorted */
    
    cout<<"Enter no. of rows: ";
    int r1; cin>>r1;
    cout<<"Enter no. of columns: ";
    int c1; cin>>c1;

    vector<vector<int>> vec1(r1, vector<int> (c1));
    cout<<"Enter 0s and 1s in sorted order \n";
    for (int i = 0; i < r1; i++)
    {
        cout<<"for row "<<i<<endl;
        for (int j = 0; j < c1; j++)
        {
            cin>>vec1[i][j];
        }
    }

    // to call the function
    cout<<"Using method 1: \n   ";
    int ans1 = row_with_max_one_1(vec1);
    // to display the result
    if (ans1 == -1)
    {
        cout<<"There is no row which has 1"<<endl;
    }
    else
    {
        cout<<"The row: "<<ans1<<endl;
    }

    // to call the function
    cout<<"Using method 2: \n   ";
    int ans2 = row_with_max_one_2(vec1);
    // to display the result
    if (ans2 == -1)
    {
        cout<<"There is no row which has 1";
    }
    else
    {
        cout<<"The row: "<<ans2;
    }
    cout<<endl;


    
    
    /* Problem 2 */
    /* Ratate a square matrix by 90 degree */

    cout<<"Enter n: ";
    int n; cin>>n;
    vector<vector<int>> vec2(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        cout<<"For row "<<i<<endl;
        for (int j = 0; j < n; j++)
        {
            cin>>vec2[i][j];
        }
        
    }

    cout<<"Before rotation \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<vec2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    // to call the function
    rotatearray(vec2);
    



    
}

