// Write a program that takes n numbers from the user and stores them in an array.
// The program should also ask for another number from the user and print “Already
// Entered” if the user has already entered that number.


#include <iostream>
using namespace std;
main()
{
    int lenght;
    cout<<"Enter how many times you want to enter numbers: ";
    cin >> lenght;
    int another_number;
    int number[lenght];
    for (int id = 0; id < lenght; id++) {
        cout<<"Enter number: ";
        cin >> number[id];
    }
    cout<<"Enter another number: ";
    cin >> another_number;
    for (int id= 0; id < lenght; id++)
    {
        if (number[id] == another_number){
            cout<<"Already entered";
        }
    }


}