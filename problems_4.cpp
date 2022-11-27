#include <iostream>
#include <vector>
using namespace std;

/* For problem 1 */
void print_spirally(vector<vector<int>> &matrix){

    int left = 0;                   // it refers elements of left most column
    int right = matrix[0].size()-1; // it refers elements of right most column
    int top = 0;                    // it refers elements of upper most row
    int bottem = matrix.size()-1;   // it refers elements of lower most row

    int direction = 0;              // to move from one direction to another direction

    while (left<=right && top<=bottem)
    {

        // to move from left to right
        if (direction == 0)
        {
            // to print elements of upper most row
            for (int col = left; col <= right; col++)
            {
                cout<<matrix[top][col]<<" ";
            }
            // to eliminate elements of (top)th row from the given matrix
            top++;
        }

        // to move from top to bottem
        else if (direction == 1)
        {
            // to print elements of right most column
            for (int row = top; row <= bottem ; row++)
            {
                cout<<matrix[row][right]<<" ";
            }
            // to eliminate elements of (right)th column from the given matrix
            right--;
        }

        // to move from right to left
        else if (direction == 2)
        {
            // to print elements of lower most row
            for (int col = right; col >= left; col--)
            {
                cout<<matrix[bottem][col]<<" ";
            }
            // to eliminate elements of (bottem)th row from the given matrix
            bottem--;
        }

        // to move from bottem to top
        else
        {
            // to print elements of right most column
            for (int row = bottem; row >= top; row--)
            {
                cout<<matrix[row][left]<<" ";
            }
            // to eliminate elements of (left)th row from the given matrix
            left++;    
        }

        direction = (direction+1)%4 ;
    }
    cout<<"\n \n";
}


/* For problem 2 */
vector<vector<int>> input_spirally(int n){

    vector<vector<int>> matrix2(n, vector<int>(n));

    int left = 0;                   // it refers elements of left most column
    int right = n-1;                // it refers elements of right most column
    int top = 0;                    // it refers elements of upper most row
    int bottem = n-1;               // it refers elements of lower most row

    int element = 1;
    int direction = 0;              // to move from one direction to another direction

    while (left<=right && top<=bottem)
    {

        // to move from left to right
        if (direction == 0)
        {
            // to insert elements of upper most row
            for (int col = left; col <= right; col++)
            {
                matrix2[top][col] = element++;
            }
            // to eliminate (top)th row from the given matrix
            top++;
        }

        // to move from top to bottem
        else if (direction == 1)
        {
            // to insert elements of right most column
            for (int row = top; row <= bottem ; row++)
            {
                matrix2[row][right] = element++;
            }
            // to eliminate (right)th column from the given matrix
            right--;
        }

        // to move from right to left
        else if (direction == 2)
        {
            // to insert elements of lower most row
            for (int col = right; col >= left; col--)
            {
                matrix2[bottem][col] = element++;
            }
            // to eliminate (bottem)th row from the given matrix
            bottem--;
        }

        // to move from bottem to top
        else
        {
            // to insert elements of right most column
            for (int row = bottem; row >= top; row--)
            {
                matrix2[row][left] = element++;
            }
            // to eliminate (left)th row from the given matrix
            left++;    
        }

        direction = (direction+1)%4 ;
    }
    cout<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<"Row "<<i<<": ";
        for (int j = 0; j < n; j++)
        {
            cout<<matrix2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\n \n";
    
}



int main(){

    /* Problem 1 */
    /* Print elements of a given matrix in spiral order */

    cout<<"No. of rows: ";
    int r1; cin>>r1;
    cout<<"No. of columns: ";
    int c1; cin>>c1;
    vector<vector<int>> vec1(r1, vector<int>(c1));

    for (int i = 0; i < r1; i++)
    {
        cout<<"For row "<<i<<endl;
        for (int j = 0; j < c1; j++)
        {
            cin>>vec1[i][j];
        }
    }
    cout<<endl<<"Original array \n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout<<vec1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    // to call the function
    print_spirally(vec1);




    /* Problem 2 */
    /* Generate a matrix of size 'n x n' filled with elements from '1' to (n to the power 2)     */
    cout<<"Enter n: ";
    int n; cin>>n;
    
    // to call the function
    input_spirally(n);
    


}