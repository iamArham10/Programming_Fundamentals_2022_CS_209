#include <iostream>
using namespace std;
main()
{
    int length;
    cout<<"Enter how many numbers you want to enter: ";
    cin >> length;
    int numbers[length];
    for (int idx = 0; idx < length; idx++)
    {
        cout<<"Enter digit number "<<idx+1<<" : ";
        cin >> numbers[idx];
    }
    int output_array[length];
    int count = 0;
    for (int idx = 1; idx < length-1; idx++)
    {
        if (numbers[idx] > numbers[idx - 1] && numbers[idx] > numbers[idx + 1] )
        {
            output_array[count] = numbers[idx];
            count = count + 1;
        }
    }
    if (count == 0)
    {
        cout<<"No peak found";
        return 0;
    }
    cout<<"{";
    cout<<output_array[0];
    for (int idx = 1; idx < count; idx++)
    {
        cout<<","<<output_array[idx];
    }
    cout<<"}";
}