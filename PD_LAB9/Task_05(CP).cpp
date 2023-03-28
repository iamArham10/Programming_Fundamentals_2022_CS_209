#include <iostream>
using namespace std;
main()
{
    string words[4];
    bool same = false;
    string first;
    for (int idx = 0; idx < 4; idx++)
    {
        cout << "Enter String: ";
        cin >> words[idx];
        first = words[0];
        if (words[0] == words[idx])
        {
            same = true;
        }
        else
        {
            same = false;
            
        }
    }
    if (same)
    {
        cout << "True";
    }
    else {
        cout<<"False";
    }
}