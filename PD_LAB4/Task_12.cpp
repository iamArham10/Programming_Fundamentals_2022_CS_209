#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void price_of_roses(int red, int white,int tulip);
main() {
int red,white,tulip;
cout<<"Enter number of red roses: ";
cin >> red;
cout<<"Enter number of white roses: ";
cin >> white;
cout<<"Enter number of tulips: ";
cin >> tulip;
price_of_roses(red,white,tulip);
}
void gotoxy(int x, int y) {
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void price_of_roses(int red, int white,int tulip) {
float price_of_red = red * 2;
float price_of_white = white * 4.10;
float price_of_tulips = tulip * 2.50;
float total_price = price_of_red + price_of_white + price_of_tulips;
if (total_price > 200) {cout<<"Your total price is "<<(total_price*80)/100;}
if (total_price < 200)  {cout<<"Your total price is "<<total_price;}
}
