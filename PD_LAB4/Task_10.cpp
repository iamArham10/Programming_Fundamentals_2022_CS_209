#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void ticket_price(string,int);
main() {
string country;
int price;
while (true) 
 {
 cout<<"Enter Country name: ";
 cin >> country;
 cout<<"Enter Ticket price: ";
 cin >> price;
 ticket_price(country, price);
 cout<<endl;
 }
}
void gotoxy(int x, int y) {
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void ticket_price(string country,int price)
 {
 if (country == "Pakistan") {cout<<"Your final ticket price is "<<(price*95)/100;}
 if (country == "Ireland") {cout<<"Your final ticket price is "<<(price*90)/100;}
 if (country == "India") {cout<<"Your final ticket price is "<<(price*80)/100;}
 if (country == "England") {cout<<"Your final ticket price is "<<(price*70)/100;}
 if (country == "Canada") {cout<<"Your final ticket price is "<<(price*55)/100;}
 }