#include <iostream>
using namespace std;
int main(){

    int arr1[4] = {1,2,3,4};
    int *ptr1 = &arr1[0];// M.L.(memory location) of element of the array 'arr1' at 0th index is stored in pointer 'ptr1'

    // to show elements of the array 'arr1' using pointers
    cout<<*ptr1<<" "<<*(ptr1+1)<<" "<<*(ptr1+2)<<" "<<*(ptr1+3)<<endl;

    cout<<*ptr1++<<endl; // in this, ptr1 has the adddress of second element but shows the first element due to post increament
    cout<<*ptr1<<endl;// now, it shows second element of the array due to increament

    cout<<++*ptr1<<endl; /// in this, ptr1 has the adddress of third element and shows the third element due to pre increament
    cout<<*ptr1<<endl<<endl;// now, it shows third element of the array due to increament



    /* We can change an element of the array using pointers */
    int arr2[3] = {10,20,30};
    int *ptr2 = &arr2[0];
    int *ptr3 = &arr2[2];
    cout<<"The array arr2: "<<arr2[0]<<" "<<arr2[1]<<" "<<arr2[2]<<" \n";

    cout<<(*ptr2)++<<endl;// in this, we will access first element and than increase it to 1
    cout<<arr2[0]<<" "<<arr2[1]<<" "<<arr2[2]<<"\n";// arr2[0] shows 11 due to increament

    cout<<(*ptr3)++<<endl;// in this, we will access third element and than increase it to 1
    cout<<arr2[0]<<" "<<arr2[1]<<" "<<arr2[2]<<"\n";// arr2[2] shows 31 due to increament



    /* We can store whole array in a pointer */
    // the address of the array stored in the pointer
    int arr3[5] = {9,8,7,6,5};
    int (*ptr4)[5] = &arr3;
    cout<<"Address of array arr3: "<<arr3<<endl;
    cout<<"address stored in ptr4: "<<ptr4<<endl;

    // after dereferenceing we get the address of the array
    cout<<"After dereferenceing : "<<*ptr4<<endl;

    // we can access the elements of the array
    for (int i = 0; i < 5; i++)
    {
        cout<<*(*(ptr4)+i)<<",";/*First it will dereference the address of the array that is the address of its first element
                                  and then dereference the address of the element lying on 'ith' row*/
    }
    cout<<endl;

    
}