#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> pascal_triangle(int n){

    //  to store the result
    vector<vector<int>> pascal(n);
    
    for (int i = 0; i < n; i++)
    {
        // to resize every next vector ,i.e., row
        pascal[i].resize(i+1);

        for (int j = 0; j < i+1; j++)

        if (j==0 || j==i)
        {
            // Because, first and last co-officients are always 1
            pascal[i][j] = 1;
        }

        else
        {
            pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
        }
    }

    return pascal;

}

int main(){

    /* write a program to display pascal triangle for 'n' index */
    
    cout<<"Enter n: ";
    int n; cin>>n;

    vector<vector<int>> ans_vactor;

    // to call the function and store the result int 'ans_vector'
    ans_vactor = pascal_triangle(n);

    // to print the result
    for (int i = 0; i < ans_vactor.size(); i++)
    {
        for (int j= 0; j < ans_vactor[i].size(); j++)
        {
            cout<<ans_vactor[i][j]<<" ";
        }
        cout<<endl;        
    }

    

}