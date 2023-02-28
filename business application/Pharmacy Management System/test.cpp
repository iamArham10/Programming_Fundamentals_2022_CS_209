#include <iostream>
using namespace std;
bool IsDigitRepeating(string);
main()
{
    cout << IsDigitRepeating("355647");
}

bool IsDigitRepeating(string code)
{
    bool IsRepeating = false;
    int firstdigit;
    int seconddigit;
    for (int idx = 0; code[idx] != '\0' ;idx++)
    {
        firstdigit = code[idx];
        for (int itx = idx + 1; code[itx] != '\0';itx++)
        {
            if (idx == itx)
            {
                continue;
            }
            seconddigit = code[itx];
            if (seconddigit == firstdigit)
            {
                IsRepeating = true;
                return IsRepeating;
            }
        }
    }
    return IsRepeating;
}