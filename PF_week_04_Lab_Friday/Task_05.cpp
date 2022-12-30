#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
main() {
string name;
cout<<"Enter your name ";
cin >> name;
system("cls");
gotoxy(50,10);
cout<<name;
gotoxy(20,20);

}
void gotoxy(int x, int y) {
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}