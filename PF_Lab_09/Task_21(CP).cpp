/*Create a program that takes two arrays and inserts the second array in the middle of the
first array. The first array always has two elements.*/
#include <iostream>
using namespace std;
main() {
    int l = 2;
    int array_1[l];
    for (int idx = 0; idx < 2; idx++)
    {
        cout<<"Enter element number "<<idx+1<<" of array 1: ";
        cin >> array_1[idx];
    }
    int lenght;
    cout<<"Enter how many numbers you want to add in the middle of first array: ";
    cin >> lenght;
    int array_2[lenght];
    for (int idx = 0; idx < lenght;idx++)
    {
        cout<<"Enter number: ";
        cin >> array_2[idx];

    }
    array_1[l+lenght];
    for (int idx = 0; idx < lenght ;idx++)
    {
        array_1[l] = array_1[l-1];
        array_1[l-1] = array_2[idx];
        l = l+1;
        
    }
    for (int idx = 0 ; idx < lenght + 2; idx++)
    {
        cout<<array_1[idx]<<" ";

    }
    


}