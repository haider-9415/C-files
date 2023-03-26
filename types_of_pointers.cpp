#include <iostream>
using namespace std;
int main(){
    
    /* Wild pointer */
    // int *ptr1;// It is a wild pointer,therefore, it has garbage address where some garbage value is
    // cout<<"Address stored in ptr1: "<<ptr1<<endl;
    // cout<<"After deferenceing of ptr1: "<<*ptr1<<"\n\n";


    /* Null pointer */
    // NULL = 0 = \0
    // int *ptr2 = NULL;
    // int *ptr3 = 0;
    // int *ptr4 = '\0';
    // cout<<"Address stored in ptr2: "<<ptr2<<endl;
    // cout<<"Address stored in ptr3: "<<ptr3<<endl;
    // cout<<"Address stored in ptr4: "<<ptr4<<endl;
    // cout<<"After deferenceing of ptr3: "<<*ptr2<<"\n";
    // cout<<"After deferenceing of ptr2: "<<*ptr2<<"\n";
    // cout<<"After deferenceing of ptr4: "<<*ptr4<<"\n\n";
    // // you can see ,after referenceing, both are not showing any value,because,it is the segmentation fault



    /* Dangling pointer */

    // int *ptr5 = NULL;
    
    // {
    //     int x = 100;
    //     ptr5 = &x;
    //     cout<<"Adress of x: "<<&x<<endl;
    //     cout<<"Address stored in ptr5 inside of the block: "<<ptr5<<endl;
    // }

    // cout<<"Address stored in ptr5 outside of the block: "<<ptr5<<endl;// 'x' is not valid outside of the block,therefore, it is the dangling pointer



    /* Void pointer */
    char f = '&';
    int i = 10;
    void *ptr6 = &f;
    ptr6 = &i;

    int *int_p = (int *)ptr6;
    cout<<*int_p<<endl;
    



}