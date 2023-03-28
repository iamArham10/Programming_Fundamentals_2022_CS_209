
#include <iostream>
using namespace std;
main()
{
    string string_1;
    string string_2;
    char string_3[100];
    cout << "Enter string number one: ";
    cin >> string_1;
    cout << "Enter string number two: ";
    cin >> string_2;
    int count = 0;
    for (int idx = 0; string_1[idx] != '\0'; idx++)
    {

        for (int itx = 0; string_2[itx] != '\0'; itx++)
        {
            if (string_1[idx] == string_2[itx])
            {
                string_1[idx] = ' ';
                string_2[itx] = ' ';
                count = count + 1;

                break;
            }
        }
    }
    cout << count;
}