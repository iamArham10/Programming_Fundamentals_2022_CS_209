#include <iostream>
#include <windows.h>
using namespace std;
int My_Spaceship[2][3] = 
    {
        {214,214,214},
        {212,212,212}
    };
void Print_Border();
void Print_Spaceship();
main()
{
    Print_Border();
    Print_Spaceship();
}

void Print_Border()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
    char c = '#';
    system("cls");
    for (int idx = 0;idx < 133;idx++)
    {
        cout << c;
    }
    cout << endl;
    for (int idx = 0; idx < 30;idx++)
    {
        cout << c;
        for(int idx = 0; idx < 132;idx++)
        {
            cout << " ";
        }
        cout << c << endl;
    }
    for (int idx = 0;idx < 133;idx++)
    {
        cout << c;
    }
}
void Print_Spaceship()
{
    for (int idx = 0; idx < 2;idx++)
    {
        for (int itx = 0; itx < 3;itx++)
        {
            char c = My_Spaceship[idx][itx];
            cout << c;
        }
        cout << endl;
    }
}
