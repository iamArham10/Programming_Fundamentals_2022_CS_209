#include <iostream>
using namespace std;
main()
{
    int change[4];
    float value[4] = {0.25,0.10,0.05,0.01};
    string values[4] = {"quaters","dimes","nickles","pennies"};
    float total_due;
    cout<<"Enter total due: ";
    cin >> total_due;
    float sum = 0;
    for (int idx = 0; idx < 4; idx++)
    {
        cout<<"Enter number of "<<values[idx]<<" : ";
        cin >> change[idx];
        sum = sum + (change[idx]*value[idx]);
    }
    if (sum > total_due){
        cout<<"true";
    }
    else {
        cout<<"False";
    }


}