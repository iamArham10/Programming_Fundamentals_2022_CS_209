#include <iostream>
using namespace std;
bool check_rows(char board[][5]);
main()
{
    char arr[3][5] = 
    {
        {'X','|','Y','|','X'},
        {'Y','|','X','|','X'},
        {'X','|','Y','|','X'}
    };
    cout << check_rows(arr);
}

bool check_rows(char board[][5])
{
    bool equal_row = false;
    for (int idx = 0; idx < 3;idx++)
    {
        int temp = board[idx][0];
        for (int itx = 0; itx < 5;itx = itx + 2)
        {
            if (temp == board[idx][itx])
            {
                equal_row = true;
            }
            else 
            {
                equal_row = false;
                break;
            }
            temp = board[idx][itx];
        }
        if (equal_row = true)
        {
            break;
        }
    }
    return equal_row;
}

