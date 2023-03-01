#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    string password;
    char c;
    for (int idx = 0 ; idx < 6;idx++)
    {
        c = getch();
        cout << "*";
        password = password + c;
    }
    cout << password;
}