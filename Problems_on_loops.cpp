#include <iostream>
using namespace std;

int main(){

    /* Problem 1 */
    /* print all alphabets in capital letter and their ASCII values */

    /* in c++, a character is stored in its ASCII value and we can convert an alphabet in its ASCII value 
       by using '(int)x' ,here 'x' is the alphabet, and an ASCII value in alphabet by using '(char)x'
       here 'x' is the ASCII value. */
    
    char first = 'A';
    cout<<"Alphabets   ASCII values"<<endl;
    for (int i = 0; i < 26; i++)
    {
        cout<<"   "<<(char)('A' + i)<<"            "<<(int)('A' + i)<<endl;
    }



    
    /* Problem 2 */
    /* Print alphabetical diamond pattern */

    cout<<"Enter a +ve integer: ";
    int n;cin>>n;
    
    /* this part is to print upper trinagle */
    // this is for no. of rows
    for (int no_of_row = 0; no_of_row < n; no_of_row++)
    {
        int no_of_spaces = n - no_of_row;
        // this is to print spaces
        for (int i = 0; i < no_of_spaces; i++)
        {
            cout<<" ";
        }

        int no_of_char = 2 * no_of_row-1;
        // this is to print characters 
        for (int j = 0; j < no_of_char; j++)
        {
            cout<<(char)('A'+j);
        }
        cout<<endl;
    }

    /* this part is to print lower triangle */
    // this os for no. of rows
    for (int no_of_row = n + 1 ; no_of_row <= 2 * n - 1 ; no_of_row++)
    {
        int no_of_spaces = no_of_row - n;
        // this is to print spaces
        for (int i = 0; i < no_of_spaces; i++)
        {
            cout<<" ";
        }
        
        int no_of_char = 2 * (2 * n - no_of_row) - 1;
        // this is to print characters 
        for (int j = 0; j < no_of_char; j++)
        {
            cout<<(char)('A'+j);
        }
        cout<<endl;

    }
    cout<<"\n";
    
    
    
    
    /* Problem 3 */
    /* Print + sign */

    cout<<"Enter an odd +ve integer: ";
    int n2;cin>>n2;
    
    for (int no_of_row = 1; no_of_row < n2; no_of_row++)
    {
        for (int no_of_column = 1; no_of_column < n2; no_of_column++)
        {
            if (no_of_row==n2/2 || no_of_column==n2/2)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    cout<<"\n";



    
    /* Problem 4 */
    /* Print a rectangle using stars */

    cout<<"Enter the length: ";
    int n3;cin>>n3;
    cout<<"Enter the breadth: ";
    int n4;cin>>n4;

    for (int no_of_row = 0; no_of_row < n3; no_of_row++)
    {
        for (int no_of_column = 0; no_of_column < n4; no_of_column++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"\n";


    
    
    /* Problem 5 */
    /* Print alphabetical square in capital letters */
    
    cout<<" Alphabetical square \n \n";
    char let1 = 'A';
    for (int no_of_row = 0; no_of_row < 26; no_of_row++)
    {
        for (int no_of_column = 0; no_of_column < 26; no_of_column++)
        {
            cout<<(char)('A'+no_of_column);
        }
        cout<<endl;
        
    }
    cout<<"\n";
    
    return 0;

}