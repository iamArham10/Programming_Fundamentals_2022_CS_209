/*Write a program that takes n numbers from the user and stores them in an array.
The program should also ask for another number and print the scalar product of that
number with each of the n numbers.*/

#include <iostream>
using namespace std;
main() {
    int lenght;
    cout<<"Enter how many times you want to enter a number: ";
    cin >> lenght;
    int numbers[lenght];
    for (int id = 0; id < lenght; id++)
    {
        cout<<"Enter number: ";
        cin >> numbers[id];
    }
    int another_number;
    cout<<"Enter another number: ";
    cin >> another_number; 
    for (int id = 0; id < lenght; id++)
    {
        cout<<numbers[id]*another_number<<" ";
    }
}