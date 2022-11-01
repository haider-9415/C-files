#include<iostream>
using namespace std;
int main(){
    int x;
    // char character;
    // cout<<"Write a lowercase character to check it is vowel or constant \n ";
    // cin>>character;

    // switch (character)
    // {
    // case 'a':
    //     cout<<"Vowel";
    //     break;

    // case 'e':
    //     cout<<"Vowel";
    //     break;

    // case 'i':
    //     cout<<"Vowel";
    //     break;
    // case 'o':
    //     cout<<"Vowel";
    //     break;
    // case 'u':
    //     cout<<"Vowel";
    //     break;
    
    // default:
    //     cout<<"Constant";
    //     break;
    // }

    cout<<"Enter a number from 1 to 7 \n";
    cin>>x;

    switch (x)
    {
    case 1:
        cout<<"Monday";
        break;
    case 2:
        cout<<"Tuesday";
        break;
    case 3:
        cout<<"Wednesday";
        break;
    case 4:
        cout<<"Thursday";
        break;
    case 5:
        cout<<"Friday";
        break;
    case 6:
        cout<<"Saturday";
        break;
    case 7:
        cout<<"Sunday";
        break;
    
    default:
        cout<<"Try again";
        break;
    }

}