#include <iostream>
using namespace std;
main()
{
    int numbers[100];
    int number;
    cout<<"Enter how many numbers you want to add: ";
    cin >> number;
    bool seven = false;
    for (int idx = 0;idx < number; idx++)
    {
        cout<<"Enter Number: ";
        cin >> numbers[idx];
        if (numbers[idx] == 7)
        {
            seven = true;
        }
        
    }
    if (seven){
        cout<<"True";
    }
    else {
        cout<<"False";
    }
}