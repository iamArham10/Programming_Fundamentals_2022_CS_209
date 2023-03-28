#include <iostream>
using namespace std;
main()
{
    char c;
    for (int idx = 0 ; idx < 500 ; idx++)
    {
        c = idx;
        cout << idx << "  " << c << "  " << endl;
    }
}