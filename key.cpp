#include <iostream>
using namespace std;
int main(){
//     for(int i = 1; i <= 3; i++) {

// 	for(int j = 1; j <= 3; j++) {

// 		cout << j << "";
//         if (i==j){
//             break;
//         }
// }

// cout<<"\n";

// }
    // int i=5;

    // for (; i%5==0 ; i+=5)
    // {
    //     if (i%7==0){
    //         break;
    //     }

    // }
    // cout<<i;
    

    // for (int i = 1; i <= 100; i++)
    // {
    //     if (i%3==0){
    //         continue;
    //     }
    //     cout<<i<<",";
    // }

    int n;
    cout<<"Enter a no. \n";
    cin>>n;
    cout<<"its factors = ";
    for (int i = 1; i <= n; i++)
    {
        if ((n%i==0)){
            cout<<i<<",";
        }
    }
}