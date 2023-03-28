#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <conio.h>
#include <fstream>
using namespace std;
const int maze_rows = 30;
const int maze_columns = 135;
char w = 178;
char s = ' ';
char maze[maze_rows][maze_columns] =
    {
        {w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w},
        {w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w},
        {w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w},
        {w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w},
        {w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w},
        {w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w},
        {w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w},
        {w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w},
        {w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w},
        {w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w},
        {w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w},
        {w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w},
        {w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w},
        {w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w},
        {w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w},
        {w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w},
        {w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w},
        {w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w},
        {w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w},
        {w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w},
        {w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w},
        {w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w},
        {w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w},
        {w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w},
        {w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w},
        {w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w},
        {w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w},
        {w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w},
        {w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, w},
        {w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w}};
void print_maze();
void save_maze();
void load_maze();
char getOption(); // to get option
string sentences[10] = {"ride", "chef", "venus", "reserve", "reproduction", "middle", "memorabdum", "trolly", "cute", "linger"};
int sentence_no = 0;
string current_sentence = sentences[sentence_no];
void header();
void Main_menu();
void show_rules();
void game_end();
int bullet_count = 0;
int bullet_x[10000];
int bullet_y[10000];
bool isBulletActive[1000];
void generate_bullets();
void print_bullet(int x, int y);
void move_bullet();
void erase_bullet(int x, int y);
void make_bullet_inactive(int i);
int sentence_x = 50;
int sentence_y = 2;
int death_starx = sentence_x;
int death_stary = 27;
int random(int start, int range);
void gotoxy(int, int);
char getCharAtxy(short int x, short int y);
void death_star();
bool should_move_down(int x, int y);
void print_aesthetic_map();
void erase_death_star();
void add_score(int n);
void game_ended_menu();
bool type_char(char, char);
bool bullet_collision();
void print_sentence(int x, int y, string sentence);
void erase_sentence(int x, int y, string sentence);
void update_score();
void deduct_health(int i);
void show_health();
int count_words(string);
void erase_bullet_AfterCollision();
int score = 0;
int health = 5;

main()
{
    // char maze[25][50];
    save_maze();
    bool startgame = true;
    while (startgame)
    {
        score = 0;
        health = 5;
        Main_menu();
        char option = getOption();
        if (option == '1')
        {
            system("cls");
            gotoxy(0, 0);
            print_maze();
            print_aesthetic_map();
            bool game_running = true;
            string running_sentence = current_sentence;
            int current_char_no = 0;
            while (game_running)
            {
                gotoxy(0, 0);
                update_score();
                show_health();
                death_star();
                erase_sentence(sentence_x, sentence_y - 1, running_sentence);
                char current_char = running_sentence[current_char_no];
                if (kbhit())
                {
                    char c = getch();
                    if (type_char(current_char, c))
                    {
                        running_sentence[current_char_no] = ' ';
                        current_char_no++;
                        int running_word_length = count_words(running_sentence);
                        if (current_char_no == running_word_length)
                        {
                            generate_bullets();
                        }
                    }
                }

                move_bullet();

                if (!should_move_down(sentence_x, sentence_y + 3))
                {
                    erase_death_star();
                    sentence_no = random(0, 9);
                    current_sentence = sentences[sentence_no];
                    sentence_x = random(2, 50);
                    running_sentence = current_sentence;
                    sentence_y = 2;
                    deduct_health(1);
                    current_char_no = 0;
                    if (health == 0)
                    {
                        game_ended_menu();
                        Sleep(500);
                        break;
                    }
                }

                if (bullet_collision())
                {
                    erase_bullet_AfterCollision();
                    erase_death_star();
                    sentence_no = random(0, 9);
                    current_sentence = sentences[sentence_no];
                    sentence_x = random(2, 50);
                    running_sentence = current_sentence;
                    current_char_no = 0;
                    sentence_y = 2;
                    add_score(1);
                }

                print_sentence(sentence_x, sentence_y, running_sentence);
                sentence_y++;
                Sleep(150);
            }
        }
        else if (option == '2')
        {
            bool showing_rules = true;
            while (showing_rules)
            {
                show_rules();
                char rules_option = getOption();
                if (rules_option == '0')
                {
                    showing_rules = false;
                }
            }
        }

        else if (option == '0')
        {
            break;
        }

        else
        {

            cout << "Wrong Option try again";
            Sleep(1000);
            system("cls");
        }
    }
}
// a function that returns a random value
int random(int start, int range)
{
    return start + rand() % range;
}

// displays the main header of the game
void header()
{
    system("Color 07");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
    cout << "'########:'##:::'##:'########::'####:'##::: ##::'######:::::::'######::'##::::'##::'#######:::'#######::'########:'########:'########::" << endl;
    cout << "... ##..::. ##:'##:: ##.... ##:. ##:: ###:: ##:'##... ##:::::'##... ##: ##:::: ##:'##.... ##:'##.... ##:... ##..:: ##.....:: ##.... ##:" << endl;
    cout << "::: ##:::::. ####::: ##:::: ##:: ##:: ####: ##: ##:::..:::::: ##:::..:: ##:::: ##: ##:::: ##: ##:::: ##:::: ##:::: ##::::::: ##:::: ##:" << endl;
    cout << "::: ##::::::. ##:::: ########::: ##:: ## ## ##: ##::'####::::. ######:: #########: ##:::: ##: ##:::: ##:::: ##:::: ######::: ########::" << endl;
    cout << "::: ##::::::: ##:::: ##.....:::: ##:: ##. ####: ##::: ##::::::..... ##: ##.... ##: ##:::: ##: ##:::: ##:::: ##:::: ##...:::: ##.. ##:::" << endl;
    cout << "::: ##::::::: ##:::: ##::::::::: ##:: ##:. ###: ##::: ##:::::'##::: ##: ##:::: ##: ##:::: ##: ##:::: ##:::: ##:::: ##::::::: ##::. ##::" << endl;
    cout << "::: ##::::::: ##:::: ##::::::::'####: ##::. ##:. ######::::::. ######:: ##:::: ##:. #######::. #######::::: ##:::: ########: ##:::. ##:" << endl;
    cout << ":::..::::::::..:::::..:::::::::....::..::::..:::......::::::::......:::..:::::..:::.......::::.......::::::..:::::........::..:::::..::" << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 07);
}

// to load 2d maze;
void load_maze()
{
    int maze_x = 0;
    int maze_y = 0;
    fstream myfile;
    string line = "";
    myfile.open("maze.txt",ios::in);
    while (!myfile.eof())
    {
        getline(myfile >> ws, line);
        for (int idx = 0;line[idx] != '\0';idx++)
        {
            maze[maze_x][maze_y] = line[idx];
            maze_y++; 
        }
        maze_x++;
    }
    myfile.close();

}
// to save 2d maze array in file
void save_maze()
{
    fstream myfile;
    myfile.open("maze.txt",ios::out);
    for (int idx = 0 ; idx < maze_rows;idx++)
    {
        for (int itx = 0; itx < maze_columns;itx++)
        {
            myfile << maze[idx][itx];
        }
        myfile << endl;
    }
    myfile.close();
}
// this functions displays the main menu of the game
void Main_menu()
{

    system("cls");
    
    header();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
    cout << endl;
    cout << endl;
    cout << "Press the following Keys: "<< endl;
    cout << endl;
    cout << "Enter 1 to start the game" << endl;
    cout << "Enter 2 to see rules     " << endl;
    cout << "Enter 0 to exit" << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 07);
}
// displays aesthetic color full map
void print_aesthetic_map(){
    gotoxy(108,10);
    char block = 178;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
    cout <<"        "<<block<<block<<endl;
    gotoxy(108,11);
    cout <<"        "<<block<<block<<endl;
    gotoxy(108,12);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
    cout <<" "<<block<<block<<"            "<<block<<block<<endl;
    gotoxy(108,13);
    cout <<" "<<block<<block<<"            "<<block<<block<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 02);
    gotoxy(108,14);
    cout <<"        "<<block<<block<<endl;
    gotoxy(108,15);
    cout <<"        "<<block<<block<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 07);
}
// display final score when game is ended
void game_end()
{
    system("cls");
    gotoxy(55, 52);
    cout << "Game Ended";
    cout << endl;
    gotoxy(55, 53);
    cout << "Total score is " << score;
}

// displays rules of the game
void show_rules()
{
    system("cls");
    header();
    cout << endl;
    cout << endl;
    cout << " Rules: " << endl;
    cout << endl;
    cout << "1. you can shoot words by typing them" << endl;
    cout << "2. Score will be incremented everytime you destroy the character" << endl;
    cout << "3. If 5 character crossed your spaceship it'll be destroyed and game will end" << endl;
    cout << endl;
    cout << " Press 0 to go back to main menu." << endl;
}
// to increment score
void add_score(int n)
{
    score = score + n;
}

// to show score at console
void update_score()
{

    gotoxy(111, 26);
    cout << "Score = " << score;
}

// to deduct health;
void deduct_health(int n)
{
    health = health - n;
}

// To Generate Bullets
void generate_bullets()
{
    char bullet = 23;
    bullet_x[bullet_count] = death_starx + 1;
    bullet_y[bullet_count] = death_stary - 2;
    isBulletActive[bullet_count] = true;
    gotoxy(death_starx, death_stary);
    cout << bullet;
    bullet_count++;
}
// to print bullet
void print_bullet(int x, int y)
{
    char bullet = 23;
    gotoxy(x, y);
    cout << bullet;
}
// to move bullet
void move_bullet()
{
    for (int i = 0; i < bullet_count; i++)
    {
        if (isBulletActive[i] == true)
        {
            char nextlocation = getCharAtxy(bullet_x[i], bullet_y[i] - 1);
            if (nextlocation != ' ')
            {
                erase_bullet(bullet_x[i], bullet_y[i]);
                make_bullet_inactive(i);
            }
            else
            {
                erase_bullet(bullet_x[i], bullet_y[i]);
                bullet_y[i] = bullet_y[i] - 1;
                print_bullet(bullet_x[i], bullet_y[i]);
            }
        }
    }
}
void erase_bullet_AfterCollision()
{
    for (int i = 0;i < bullet_count;i++)
    {
        if (isBulletActive[i] = true)
        {
            char nextlocation = getCharAtxy(bullet_x[i], bullet_y[i] - 1);
            erase_bullet(bullet_x[i], bullet_y[i]);
            make_bullet_inactive(i);
        }
    }
}
// to erase any bullet;
void erase_bullet(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}

// to make any bullet inactive
void make_bullet_inactive(int i)
{
    isBulletActive[i] = false;
}
// to showw health
void show_health()
{
    gotoxy(106, 25);
    cout << "Health Remaining: ";
    for (int idx = 0; idx < health + 1; idx++)
    {
        cout << ' ';
    }
    gotoxy(106, 25);
    char heart = 3;
    cout << "Health Remaining: ";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
    for (int idx = 0; idx < health; idx++)
    {
        cout << heart;
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 07);
}
// to print maze
void print_maze()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
    for (int idx = 0; idx < maze_rows; idx++)
    {
        for (int itx = 0; itx < maze_columns; itx++)
        {
            cout << maze[idx][itx];
        }
        cout << endl;
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 07);
}

// Funtion to get an option from the user.
char getOption()
{
    char option = getch();
    return option;
}

// Gotoxy Function
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

// To function to tell which character is at a certain position
char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT react = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &react) ? ci.Char.AsciiChar : ' ';
}

// Prints spaceship
void death_star()
{
    death_starx = sentence_x;
    death_stary = 27;
    char box = 22;
    char gun = 23;
    char death_star[2][3] = {{box, gun, box},
                             {box, box, box}};
    gotoxy(death_starx, death_stary);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
    for (int idx = 0; idx < 2; idx++)
    {

        for (int itx = 0; itx < 3; itx++)
        {
            cout << death_star[idx][itx];
        }
        gotoxy(death_starx, death_stary + 1);
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 07);
}
// to erase spaceship
void erase_death_star()
{
    death_starx = sentence_x;
    death_stary = 27;
    gotoxy(death_starx, death_stary);
    for (int idx = 0; idx < 2; idx++)
    {

        for (int itx = 0; itx < 3; itx++)
        {
            cout << " ";
        }
        gotoxy(death_starx, death_stary + 1);
    }
}
// bullet collision
bool bullet_collision()
{
    bool isColliding = false;
    char maze_block = 178;
    char bullet = 23;
    for (int i = 0; i < bullet_count; i++)
    {
        if (isBulletActive[i] == true)
        {
            char getbulletcharacter_1 = getCharAtxy(bullet_x[i], bullet_y[i] - 1);
            if (bullet_y[i] <= sentence_y)
            {
                isColliding = true;
            }
            if (getbulletcharacter_1 != ' ' && getbulletcharacter_1 != maze_block)
            {
                isColliding = true;
            }
        }
    }

    char getcharacter_1 = getCharAtxy(sentence_x, sentence_y + 2);
    char getcharacter_2 = getCharAtxy(sentence_x + 1, sentence_y + 2);
    char getcharacter_3 = getCharAtxy(sentence_x + 2, sentence_y + 2);
    char getcharacter_4 = getCharAtxy(sentence_x + 3, sentence_y + 2);
    char getcharacter_5 = getCharAtxy(sentence_x - 1, sentence_y + 2);
    char getcharacter_6 = getCharAtxy(sentence_x - 1, sentence_y + 3);
    char getcharacter_7 = getCharAtxy(sentence_x - 1, sentence_y + 3);
    if (getcharacter_1 == bullet || getcharacter_2 == bullet || getcharacter_3 == bullet || getcharacter_4 == bullet || getcharacter_5 == bullet)
    {
        isColliding = true;
    }
    if (getcharacter_6 == bullet || getcharacter_7 == bullet)
    {
        isColliding = true;
    }
    return isColliding;
}
// to count the number of characters
int count_words(string word)
{
    int count = 0;
    for (int idx = 0; word[idx] != '\0'; idx++)
    {
        count++;
    }
    return count;
}

// to show bullets
bool should_move_down(int x, int y)
{
    char next_location = getCharAtxy(x, y);
    bool move_down = true;
    if (next_location != ' ')
    {
        move_down = false;
    }
    return move_down;
}
// Shows Game ended Menu
void game_ended_menu()
{
    system("cls");
    cout << "The Game is ended" << endl;
    cout << "Final Score was: " << score << endl;
}
// this function is used to check if typed char equals to the current running character of the string
bool type_char(char current_char, char entered_char)
{
    bool correct = false;
    if (current_char == entered_char)
    {
        correct = true;
    }
    return correct;
}
// to print sentence
void print_sentence(int x, int y, string sentence)
{

    gotoxy(x, y);
    for (int idx = 0; sentence[idx] != '\0'; idx++)
    {
        cout << sentence[idx];
    }
    gotoxy(x, y + 1);
    char box = 22;
    char gun = 19;
    char enemy[1][4] = {' ', 22, 19, 22};
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
    for (int idx = 0; idx < 1; idx++)
    {
        for (int itx = 0; itx < 4; itx++)
        {
            cout << enemy[idx][itx];
        }
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 07);
}
// to erase sentence
void erase_sentence(int x, int y, string sentence)
{
    gotoxy(x, y);
    for (int idx = 0; sentence[idx] != '\0'; idx++)
    {
        cout << " ";
    }
    gotoxy(x, y + 1);
    for (int idx = 0; idx < 1; idx++)
    {
        for (int itx = 0; itx < 4; itx++)
        {
            cout << " ";
        }
    }
}
