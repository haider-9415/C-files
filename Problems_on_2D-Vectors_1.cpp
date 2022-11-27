#include <iostream>
#include <vector>
using namespace std;

/* For problem 1 */
void print(vector<vector<int>> vector){

    int left = 0;
    int right = vector[0].size()-1; 
    int top = 0;
    int bottem = vector.size()-1;

    int direction = 0;

    while (top<=bottem && left<=right)
    {
        if (direction == 0)
        {
            for (int i = right; i >= left; i--)
            {
                cout<<vector[top][i]<<" ";
            }
            top++;
        }
        else if (direction == 1)
        {
            for (int i = top; i <= bottem; i++)
            {
                cout<<vector[i][left]<<" ";
            }
            left++;
        }
        else if (direction == 2)
        {
            for (int i = left; i <= right; i++)
            {
                cout<<vector[bottem][i]<<" ";
            }
            bottem--;
        }
        else
        {
            for (int i = bottem; i >= top; i--)
            {
                cout<<vector[i][right]<<" ";
            }
            right--;
        }

        direction = (direction + 1)%4;
    }
    cout<<"\n \n";
}



/* Problem 2 */
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

int main(){

    /* Problem 1 */
    /* Print elements of a given matrix spirally in anti-clockwise direction */
    cout<<"No. of rows: ";
    int r; cin>>r;
    cout<<"No. of columns: ";
    int c; cin>>c;
    
    vector<vector<int>> vec(r, vector<int>(c));
    for (int i = 0; i < r; i++)
    {
        cout<<"Row "<<i<<endl;
        for (int j = 0; j < c; j++)
        {
            cin>>vec[i][j];
        }
        cout<<endl;
    }

    cout<<"Original vector \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    print(vec);




    /* Problem 2 */
    /* Print elements of a given matrix spirally in clockwise direction */
    cout<<"No. of rows: ";
    int r2; cin>>r2;
    cout<<"No. of columns: ";
    int c2; cin>>c2;
    vector<vector<int>> vec2(r2, vector<int>(c2));

    for (int i = 0; i < r2; i++)
    {
        cout<<"For row "<<i<<endl;
        for (int j = 0; j < c2; j++)
        {
            cin>>vec2[i][j];
        }
    }
    cout<<endl<<"Original array \n";
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout<<vec2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    // to call the function
    print_spirally(vec2);
    
    
    
}
