#include <iostream>
#include <windows.h>
using namespace std;
char My_Spaceship[2][3] = 
    {
        {214,214,214},
        {212,212,212}
    };
void Print_Border();
void Print_Spaceship();
main()
{
    Print_Border();
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
    
}
