#include <iostream>
using namespace std;
int main(){

    cout<<"Enter no. of rows: ";
    int row;cin>>row;
    cout<<"Enter no. of columns: ";
    int column; cin>>column;
    int arr1[row][column];
    
    // to take elements for the 2D array 'arr1'
    cout<<endl<<"Enter the elements \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin>>arr1[i][j];
        }
        
    }


    // to print the elements of the 2Darray 'arr1'
    for (int i = 0; i < row; i++)
    {
        cout<<"row "<<i<<": ";
        for (int j = 0; j < column; j++)
        {
            cout<<arr1[i][j]<<",";
        }
        cout<<endl;
        
    }
    
    
}