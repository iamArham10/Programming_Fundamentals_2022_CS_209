#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void overspeeding(int);
main() {
int speed;
cout<<"Enter Car speed: ";
cin >> speed;
overspeeding(speed);
}
void gotoxy(int x, int y) {
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void overspeeding(int speed) {
if (speed > 100) {cout<<"Halt! You'll be challenged";}
if (speed <= 100) {cout<<"Perfect! You're going good.";}
}