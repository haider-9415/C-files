#include <iostream>
#include <vector>
using namespace std;
int main(){

    cout<<"Enter no. of rows: ";
    int r; cin>>r;
    cout<<"Enter no.. of columns: ";
    int c; cin>>c;
    
    vector<vector<int>> vec1(r,vector<int>(c));

    cout<<"Enter elements \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>> vec1[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        cout<<"Row "<<i<<": ";
        for (int j = 0; j < c; j++)
        {
            cout<<vec1[i][j]<<",";
        }
        cout<<endl;
    }
    cout<<"\n \n";
    

    
    
    vector<vector<int>> vec2 = {{1,2,3,4,5},{1,2},{9,8,7,6},{1},{100,200,300,400,500,600,700,800,900,1000}};

    for (int i = 0; i < vec2.size(); i++)
    {
        cout<<"Row "<<i<<": ";
        // element of 'vec2' are vectors. Therefore we will use ,in second loop, vec[i].size()
        for (int j = 0; j < vec2[i].size(); j++)
        {
            cout<<vec2[i][j]<<",";
        }
        cout<<endl;
    }
    
    


}