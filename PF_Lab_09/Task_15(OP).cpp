#include <iostream>
using namespace std;
main() {
    int lenght;
    cout<<"Enter how many times you want to enter numbers: ";
    cin >> lenght;
    int numbers[lenght];
    for (int idx = 0; idx < lenght; idx++)
    {
        cout<<"Enter number: ";
        cin >> numbers[idx];
    }
    for (int idx = lenght-1;idx >= 0;idx--)
    {
        cout<<numbers[idx]<<" ";
    }


}