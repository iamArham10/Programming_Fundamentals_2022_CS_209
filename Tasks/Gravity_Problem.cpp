#include <iostream>
using namespace std;
void apply_Gravity(char maze[][5]);
main()
{
    char maze[5][5] = 
    {
        {'#','.','#','.','.'},
        {'#','#','.','#','.'},
        {'#','.','#','#','#'},
        {'.','#','#','.','.'},
        {'#','#','#','.','#'}
    };
    apply_Gravity(maze);
}
void apply_Gravity(char maze[][5])
{
    for (int row = 3; row >= 0 ; row--)
    {
        for (int column = 0 ; column < 5; column++)
        {
            if 
        }
    }
}