#include <iostream>
#include <windows.h>
#include <conio.h>
#include <fstream>
using namespace std;
void main_menu();
void play_game();
void print_maze();
void print_main_menu_options();
void gotoxy(int x, int y);
main()
{
    bool gamerunning = true;
    while (gamerunning)
    {
        system("cls");
        main_menu();
        cout << endl;
        print_main_menu_options();
        char c = getch();
        if (c == '1')
        {
            system("cls");
            play_game();
            getch();
        }
        else if ( c == '2')
        {
            continue;
        }
        else if (c== '3')
        {
            continue;
        }
        else if (c == '4')
        {
            gamerunning = false;
            system("exit");
        }
    }
    return 0;
    
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void main_menu()
{
    fstream myfile;
    myfile.open("main_menu.txt",ios::in);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
    while (!myfile.eof())
    {
        string line;
        getline(myfile, line);
        cout << line << endl;
    }
    myfile.close();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 07);
}

void print_main_menu_options()
{
    fstream myfile;
    myfile.open("main_menu_options.txt",ios::in);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
    string line;
    int x_coordinate = 28;
    int y_coordinate = 10;
    while (!myfile.eof())
    {
        gotoxy(x_coordinate,y_coordinate);
        getline(myfile, line);
        cout << line << endl;
        y_coordinate++;
    }
    myfile.close();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 07);
}

void play_game()
{
    main_menu();
    fstream myfile;
    myfile.open("play_game_options.txt", ios::in);
    int x_coordinate = 28;
    int y_coordinate = 10;
    string line;
    while (!myfile.eof())
    {
        gotoxy(x_coordinate,y_coordinate);
        getline(myfile, line);
        cout << line << endl;
        y_coordinate++;
    }
    myfile.close();
}