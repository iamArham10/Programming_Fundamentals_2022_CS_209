#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void isequal(int, int);
main() {
cout<<"Function isequal(2,4): "<<endl;
isequal(2,4);
cout<<"Function isequal(3,3): "<<endl;
isequal(3,3);
cout<<"Function isequal(4,5): "<<endl;
isequal(4,5);
cout<<"Function isequal(13,13): "<<endl;
isequal(13,13);
}
void gotoxy(int x, int y) {
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void isequal(int x, int y) {
if (x == y) {
 cout<<"These two number are equal"<<endl;
 }
if (x != y) {
 cout<<"these two numbers are not equal"<<endl;
 }
}