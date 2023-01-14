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
bool game_running = true;
int score = 0;
int pacman_x = 5;
int pacman_y = 6;

int ghost_1x = 25;
int ghost_1y = 1;

int ghost_2x = 2;
int ghost_2y = 8;
main()
{
    
    system("cls");
    maze();
    gotoxy(pacman_x, pacman_y);
    cout << "P";
    if (game_running == false) {
        cout<<"Your score was "<<score;

    }
    while (game_running)
    {
        char ghost1_nextLocation = getCharAtxy(ghost_1x, ghost_1y + 1);
        if (ghost1_nextLocation == ' ')
        {
            erase_ghost(ghost_1x, ghost_1y);
            ghost_1y = ghost_1y + 1;
            print_ghost(ghost_1x, ghost_1y);
        }
        if (ghost1_nextLocation == '.')
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
        if (ghost1_nextLocation == 'P') {
                distroy_pacman(pacman_x,pacman_y);
                
                }
        char ghost2_nextLocation = getCharAtxy(ghost_2x + 1, ghost_2y);
        if (ghost2_nextLocation == ' ')
        {
            erase_ghost(ghost_2x, ghost_2y);
            ghost_2x = ghost_2x + 1;
            print_ghost(ghost_2x, ghost_2y);
        }
        if (ghost2_nextLocation == '.')
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
        if (ghost2_nextLocation == 'P') {
                distroy_pacman(pacman_x,pacman_y);
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
            if (nextLocation == '.')
            {   
                erase_pacman(pacman_x, pacman_y);
                pacman_x = pacman_x - 1;
                print_pacman(pacman_x, pacman_y);
                score = score+1;
            }
            if (nextLocation == 'h')
            {   
                erase_pacman(pacman_x, pacman_y);
                pacman_x = pacman_x - 1;
                print_pacman(pacman_x, pacman_y);
                score = score+5;
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
            if (nextLocation == '.')
            {
                erase_pacman(pacman_x, pacman_y);
                pacman_x = pacman_x + 1;
                print_pacman(pacman_x, pacman_y);
                score = score + 1;
            }
            if (nextLocation == 'h')
            {
                erase_pacman(pacman_x, pacman_y);
                pacman_x = pacman_x + 1;
                print_pacman(pacman_x, pacman_y);
                score = score + 5;
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
            if (nextLocation == '.')
            {
                erase_pacman(pacman_x, pacman_y);
                pacman_y = pacman_y - 1;
                print_pacman(pacman_x, pacman_y);
                score = score + 1;
            }
            if (nextLocation == 'h')
            {
                erase_pacman(pacman_x, pacman_y);
                pacman_y = pacman_y - 1;
                print_pacman(pacman_x, pacman_y);
                score = score + 5;
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
            if (nextLocation == '.')
            {
                erase_pacman(pacman_x, pacman_y);
                pacman_y = pacman_y + 1;
                print_pacman(pacman_x, pacman_y);
                score = score + 1;
            }
            if (nextLocation == 'h')
            {
                erase_pacman(pacman_x, pacman_y);
                pacman_y = pacman_y + 1;
                print_pacman(pacman_x, pacman_y);
                score = score + 5;
            }
            
        }
        gotoxy(25,28);
        cout<<"Current Score"<<score;
        Sleep(100);
    }
    if (game_running == false) {
        system("cls");
        gotoxy(5,15);
        cout<<"Your score was "<<score;

    }
}

void maze()
{
    cout << "#####################################################" << endl;
    cout << "#   ...........................  ................   #" << endl;
    cout << "#                                                   #" << endl;
    cout << "# .........   h    ...................   h          #" << endl;
    cout << "#                                                   #" << endl;
    cout << "#    ................................  ...          #" << endl;
    cout << "#                                                   #" << endl;
    cout << "#   ....................      .................     #" << endl;
    cout << "#                                                   #" << endl;
    cout << "#    h     .............................   h        #" << endl;
    cout << "#  .............          ........................  #" << endl;
    cout << "#                                                   #" << endl;
    cout << "#       ................................            #" << endl;
    cout << "#                                                   #" << endl;
    cout << "# ..............................   .............    #" << endl;
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
    game_running = false;
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