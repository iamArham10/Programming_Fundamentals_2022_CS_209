#include <iostream>
#include <windows.h>
using namespace std;
void maze();
void gotoxy(int x, int y);
void print_pacman(int, int);
void erase_pacman(int, int);
void distroy_pacman(int, int);
void print_ghost(int, int);
void erase_ghost(int, int);
char getCharAtxy(short int x, short int y);
string game_running = "true";
int pacman_x = 5;
int pacman_y = 6;

int ghost_1x = 25;
int ghost_1y = 1;

int ghost_2x = 2;
int ghost_2y = 8;

int score = 0;
main()
{
    
    system("cls");
    maze();
    gotoxy(pacman_x, pacman_y);
    cout << "P";
    while (game_running == "true")
    {
        char ghost1_nextLocation = getCharAtxy(ghost_1x, ghost_1y + 1);
        if (ghost1_nextLocation == ' ')
        {
            erase_ghost(ghost_1x, ghost_1y);
            ghost_1y = ghost_1y + 1;
            print_ghost(ghost_1x, ghost_1y);
        }
        if (ghost1_nextLocation == '#') {
            erase_ghost(ghost_1x, ghost_1y);
            ghost_1y = 1;
            print_ghost(ghost_1x, ghost_1y);
        }
        char ghost2_nextLocation = getCharAtxy(ghost_2x + 1, ghost_2y);
        if (ghost2_nextLocation == ' ')
        {
            erase_ghost(ghost_2x, ghost_2y);
            ghost_2x = ghost_2x + 1;
            print_ghost(ghost_2x, ghost_2y);
        }
        if (ghost2_nextLocation == '#') {
            erase_ghost(ghost_2x,ghost_2y);
            ghost_2x = 2;
            print_ghost(ghost_2x,ghost_2y);
        }

        if (GetAsyncKeyState(VK_LEFT))
        {
            char nextLocation = getCharAtxy(pacman_x - 1, pacman_y);
            if (nextLocation == ' ')
            {
                erase_pacman(pacman_x, pacman_y);
                pacman_x = pacman_x - 1;
                print_pacman(pacman_x, pacman_y);
            }
            if (nextLocation == '#')
            {
                while (true)
                {
                    print_pacman(pacman_x, pacman_y);
                }
            }
            if (nextLocation == 'G') {
                distroy_pacman(pacman_x,pacman_y);
                game_running == "false";
            }
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            char nextLocation = getCharAtxy(pacman_x + 1, pacman_y);
            if (nextLocation == ' ')
            {
                erase_pacman(pacman_x, pacman_y);
                pacman_x = pacman_x + 1;
                print_pacman(pacman_x, pacman_y);
            }
            if (nextLocation == '#')
            {
                while (true)
                {
                    print_pacman(pacman_x, pacman_y);
                }
            }
            if (nextLocation == 'G') {
                distroy_pacman(pacman_x,pacman_y);
                game_running == "false";
            }
        }
        if (GetAsyncKeyState(VK_UP))
        {
            char nextLocation = getCharAtxy(pacman_x, pacman_y - 1);
            if (nextLocation == ' ')
            {
                erase_pacman(pacman_x, pacman_y);
                pacman_y = pacman_y - 1;
                print_pacman(pacman_x, pacman_y);
            }
            if (nextLocation == '#')
            {
                while (true)
                {
                    print_pacman(pacman_x, pacman_y);
                }
            }
            if (nextLocation == 'G') {
                distroy_pacman(pacman_x,pacman_y);
                game_running == "false";
            }
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            char nextLocation = getCharAtxy(pacman_x, pacman_y + 1);
            if (nextLocation == ' ')
            {
                erase_pacman(pacman_x, pacman_y);
                pacman_y = pacman_y + 1;
                print_pacman(pacman_x, pacman_y);
            }
            if (nextLocation == '#')
            {
                while (true)
                {
                    print_pacman(pacman_x, pacman_y);
                }
            }
            if (nextLocation == 'G') {
                distroy_pacman(pacman_x,pacman_y);
                game_running == "false";
                }
        }
        Sleep(100);
    }
}

void maze()
{
    cout << "#####################################################" << endl;
    cout << "#                                                   #" << endl;
    cout << "#                                                   #" << endl;
    cout << "#                                                   #" << endl;
    cout << "#                                                   #" << endl;
    cout << "#                                                   #" << endl;
    cout << "#                                                   #" << endl;
    cout << "#                                                   #" << endl;
    cout << "#                                                   #" << endl;
    cout << "#                                                   #" << endl;
    cout << "#                                                   #" << endl;
    cout << "#                                                   #" << endl;
    cout << "#                                                   #" << endl;
    cout << "#                                                   #" << endl;
    cout << "#                                                   #" << endl;
    cout << "#                                                   #" << endl;
    cout << "#####################################################";
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void print_pacman(int pacman_x, int pacman_y)
{
    gotoxy(pacman_x, pacman_y);
    cout << "P";
}
void erase_pacman(int pacman_x, int pacman_y)

{
    gotoxy(pacman_x, pacman_y);
    cout << " ";
}
void distroy_pacman(int pacman_x,int pacman_y) {
    gotoxy(pacman_x,pacman_y);
    cout<<"P";
    gotoxy(pacman_x,pacman_y);
    cout<<"I";
    gotoxy(pacman_x,pacman_y);
    cout<<"i";
    gotoxy(pacman_x,pacman_y);
    cout<<"X";
    gotoxy(pacman_x,pacman_y);
    cout<<" ";
    Sleep(1000);
}
void print_ghost(int ghostx, int ghosty)
{
    gotoxy(ghostx, ghosty);
    cout << "G";
}
void erase_ghost(int ghostx, int ghosty)
{
    gotoxy(ghostx, ghosty);
    cout << " ";
}
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