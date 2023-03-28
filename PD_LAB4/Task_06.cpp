#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void alphabet_A();
void alphabet_W();
void alphabet_S();
void alphabet_I();
main() {
system("cls");
alphabet_A();
gotoxy(0,10);
alphabet_W();
gotoxy(0,18);
alphabet_A();
gotoxy(0,26);
alphabet_I();
gotoxy(0,34);
alphabet_S();
}
void gotoxy(int x, int y) {
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void alphabet_A() {
cout<<"     #      "<<endl;
cout<<"   #   #     "<<endl;
cout<<"  ##   ##    "<<endl;
cout<<"  ### ###         "<<endl;
cout<<"  ##   ##       "<<endl;
}
void alphabet_W(){
cout<<" ##  #   ##   "<<endl;
cout<<" ##  #  ##     "<<endl;
cout<<"  ## # ##      "<<endl;
cout<<"   # # #       "<<endl;
cout<<"    ###        "<<endl;
}
void alphabet_I(){
cout<<"   #####           "<<endl;
cout<<"     #       "<<endl;
cout<<"     #       "<<endl;
cout<<"     #       "<<endl;
cout<<"   #####    "<<endl;}
void alphabet_S(){
cout<<"      ###     "<<endl;
cout<<"    ##      "<<endl;
cout<<"       ##    "<<endl;
cout<<"       ##     "<<endl;
cout<<"    ###       "<<endl;
}