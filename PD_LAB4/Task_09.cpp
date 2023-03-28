#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void reverse(string);
main() {
string boolean;
cout<<"Enter true or false ";
cin >> boolean;
reverse(boolean);
}
void gotoxy(int x, int y) {
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void reverse(string boolean) {
if (boolean == "true") 
 {
 cout<<"False";
 }
if (boolean == "false") 
 {
 cout<<"True";
 }
}