#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void cat_sleep(int holidays);
main() {
int holidays;
cout<<"Enter Holidays ";
cin >> holidays;
cat_sleep(holidays);
}
void gotoxy(int x, int y) {
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void cat_sleep(int holidays)
{
int working_days = 365 - holidays;
int time_for_games = (working_days*63) + (holidays*127);
int difference = 30000 - time_for_games;
int difference_hour = difference / 60;
int difference_minutes = difference%60;
if (difference < 0) {cout<<"tom will run away"<<endl<<-1*difference_hour<<"hours and "<<-1*difference_minutes<<" minutes for play";}
if (difference > 0) {cout<<"tome sleeps well"<<endl<<difference_hour<<" hours and "<<difference_minutes<<" minutes less of a play";}



}