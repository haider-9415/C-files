#include <iostream>
using namespace std;
int main(){

    /* Problem 1*/
    /* Find factorial of a number 'n' */

    cout<<"Enyer the no. n \n ";
    int n1;cin>>n1;
    int fact=1;
    for (int i = 1; i <= n1; i++)
    {
        fact*=i;
    }
    cout<<"Factorial of "<<n1<<" = "<<fact<<endl<<endl;




    /* Problem 2 */
    /* Print all armstrong numbers between 100 to 500 */

    cout<<"The armstrong numbers = ";
    for (int i = 100; i <= 500; i++)
    {
        int sum=0, t=i;
        while (t!=0)
        {
            sum+=((t%10)*(t%10)*(t%10));
            t/=10;
        }
        if (sum==i)
        {
            cout<<i<<",";
        }
        
    }
    cout<<endl<<endl;




    /* Problem 3 */
    /* Find sum of the first 'n' natural numbers */

    cout<<"Enter the no. 'n' \n";
    int n2;cin>>n2;
    int sum=0;
    for (int i = 1; i <= n2; i++)
    {
        sum+=i;
    }
    cout<<"The sum of first "<<n2<<" natural numbers = "<<sum<<"\n \n";
    




    /* Problem 4 */
    /* Reverse a given integer no. */

    cout<<"Enter an integer \n";
    int n3;cin>>n3;
    cout<<"Reverse of "<<n3<<" = ";
    for (int i = 1; i <= n3; n3/=10)
    {
        int reverse = n3%10;
        cout<<reverse;
    }
    cout<<"\n \n";
    



    /* Problem 5 */
    /* print X */

    int size1=5;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size1; j++)
        {
            if (i==j || i+j==size1-1)
            {
                cout<<"*";
            }else 
            {
                cout<<" ";
            }
        }
        cout<<endl;   
    }
    cout<<"\n \n";
    



    /* Problem 6 */
    /* Print alphabets in diamond form */

    int size2 = 5;
    int alpha = 65;
    int num = 0;

    // upside pyramid
    for (int i = 1; i <= size2; i++) {

    // printing spaces
    for (int j = size2; j > i; j--) {
    cout << " ";
    }

    // printing alphabets
    for (int k = 0; k < i * 2 - 1; k++) {
    cout << ((char)(alpha+num++));
    }

    // set the number to 0
    num = 0;
    cout << "\n";
    }


    // downside pyramid
    for (int i = 1; i <= size2 - 1; i++) {

    // printing spaces
    for (int j = 0; j < i; j++) {
    cout << " ";
    }

    // printing alphabets
    for (int k = (size2 - i) * 2 - 1; k > 0; k--) {
    cout << ((char)(alpha+num++));
    }

    // set num to 0
    num = 0;
    cout << "\n";
    }



}
