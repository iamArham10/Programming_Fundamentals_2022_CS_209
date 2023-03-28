#include <iostream>
using namespace std;
main()
{
    int lenght;
    cout << "Enter lenght of the array: ";
    cin >> lenght;
    int array[lenght];
    for (int idx = 0; idx < lenght; idx++)
    {
        cout << "Enter number " << idx + 1 << ": ";
        cin >> array[idx];
    }
    int times;
    cout << "Enter number of times You want to perform even or odd: ";
    cin >> times;
    for (int idx = 1; idx <= times; idx++)
    {
        for (int idx = 0; idx < lenght; idx++)
        {
            if (array[idx] % 2 == 0)
            {
                array[idx] = array[idx] - 2;
            }
            else
            {
                array[idx] = array[idx] + 2;
            }
        }
    }
    for (int idx = 0; idx < lenght; idx++)
    {
        cout << array[idx] << " ";
    }
}