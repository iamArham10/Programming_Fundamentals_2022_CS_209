#include <iostream>
using namespace std;
main()
{
    string word;
    cout<<"Enter String: ";
    cin >> word;
    int count = 0;
    for (int idx = 0; word[idx] != '\0'; idx++)
    {
        count = count + 1;
    }
    if (count % 2 == 0)
    {
        cout<<"True";
    }
    else {
        cout<<"False";
    }
}