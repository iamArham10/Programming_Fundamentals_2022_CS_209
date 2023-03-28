/*Create a program that takes an array of values resistance that are connected in series, and
calculates the total resistance of the circuit in ohms.*/

#include <iostream>
using namespace std;
main()
{   
    cout<<"Enter number of resistance values: ";
    int lenght;
    cin >> lenght;
    float array[lenght];
    
    float sum = 0;
    for (int id = 0; id < lenght; id++)
    {
        cout<<"Enter resistance of resister no "<<id+1<<" ";
        cin >> array[id];
        sum  = sum + array[id];

    }
    cout<<"Total resistance is "<<sum<<" ohms";

}