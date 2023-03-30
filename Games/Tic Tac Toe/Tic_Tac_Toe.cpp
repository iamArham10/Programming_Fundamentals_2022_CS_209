#include <windows.h>
#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

bool check_valid_options(char c, int start, int close);    // to check if the user has press the keys that are available in the options
void print_main_menu();                                    // to Print Main Menu
void print_menu_options();                                 // to Print Menu Options
void load_board(char board[][5]);                          // to load the board
void print_board(char board[][5]);                         // to print the board
void gotoxy(int x, int y);                                 // to move the output curser on the desired coordinates
bool isGameEnded(char board[][5]);                         // to check if the game is ended or not
bool check_rows(char board[][5]);
bool check_columns(char board[][5]);
bool check_diagonals(char board[][5]);
main()
{
    char board[3][5];
    while (true)
    {
        system("cls");
        print_main_menu();
        print_menu_options();
        cout << endl
             << endl;
        char menu_option = getch();
        if (check_valid_options(menu_option, 1, 3))
        {
            if (menu_option == '1')
            {
                while (!isGameEnded(board))
                {

                    system("cls");
                    print_main_menu();
                    load_board(board);
                    print_board(board);
                }
            }
            else if (menu_option == '3')
            {
                return false;
            }
        }
        else
        {
            menu_option = getch();
        }
    }

    return 0;
}

bool check_valid_options(char c, int start, int close)
{
    int character = int(c) - 48;
    bool valid_option = false;
    if ((character >= start) && (character <= close))
    {
        valid_option = true;
    }
    return valid_option;
}

void print_main_menu()
{

    fstream myfile;
    string line;
    myfile.open("main_menu.txt", ios::in);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
    getline(myfile >> ws, line);
    cout << line << endl;
    getline(myfile >> ws, line);
    cout << line << endl;
    while (!myfile.eof())
    {
        getline(myfile >> ws, line);
        cout << "   " << line << endl;
    }
    myfile.close();
    cout << endl
         << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 07);
}

void print_menu_options()
{
    int crd_x = 38;
    int crd_y = 15;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
    gotoxy(crd_x, crd_y);
    cout << "Press 1 to Play the Game" << endl;
    gotoxy(crd_x, crd_y + 1);
    cout << "Press 2 to See the Rules" << endl;
    gotoxy(crd_x, crd_y + 2);
    cout << "Press 3 to Exit" << endl;
}

void load_board(char board[][5])
{
    fstream myfile;
    string line;
    int board_rows = 0;
    myfile.open("tic_tac_toe_board.txt", ios::in);
    while (!myfile.eof())
    {
        getline(myfile >> ws, line);
        for (int board_columns = 0; line[board_columns] != '\0'; board_columns++)
        {
            board[board_rows][board_columns] = line[board_columns];
        }
        board_rows++;
    }
    myfile.close();
}

void print_board(char board[][5])
{
    int crd_x = 42;
    int crd_y = 15;
    char box = 196;
    char line = 179;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
    for (int row = 0; row < 3; row++)
    {
        gotoxy(crd_x, crd_y);
        for (int column = 0; column < 5; column++)
        {

            if (board[row][column] == 'b')
            {

                cout << box;
            }
            else if (board[row][column] == 'l')
            {
                cout << line;
            }
        }
        cout << endl;
        crd_y++;
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 07);
}

bool isGameEnded(char board[][5])
{
}


void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
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
            }
        }
        if (equal_row = true)
        {
            break;
        }
    }
    return equal_row;
}