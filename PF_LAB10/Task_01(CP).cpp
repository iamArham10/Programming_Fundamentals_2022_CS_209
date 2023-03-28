#include <iostream>
using namespace std;
main() {
    int no_of_weeks;
    cout<<"Of how many saturday's data you want to calculate: ";
    cin >> no_of_weeks;
    int miles[no_of_weeks];
    for (int idx = 0; idx < no_of_weeks; idx++)
    {
        cout << "Enter no of miles of saturday number "<<idx+1<<" : ";
        cin >> miles[idx];
    }
    int count = 0;
    for (int idx = 0;idx < no_of_weeks - 1;idx++)
    {
        if (miles[idx] < miles[idx+1])
        {
            count++;
        }
    }
    cout<<"Total Progressive days are: "<<count;
}