#include <iostream>
using namespace std;
main()
{
    string names[5] = {"name1", "name2", "name3", "name4", "name5"};
    string name = "name2";
    int temporary;
    for (int idx = 0; idx < 5; idx++)
    {
        if (names[idx] == name)
        {   
            int next_medicine = 1;
            int second_medicine = 2;
            for (int itx = idx; itx < 5; itx++)
            {


                names[itx] = names[itx + next_medicine];
                next_medicine++;


            }
            break;
        }
    }
    for (int idx=0; idx < 4; idx++)
    {
        cout<<names[idx];
    }
}