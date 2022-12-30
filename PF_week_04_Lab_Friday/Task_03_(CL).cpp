#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void print_maze();
main() {
system("cls");
print_maze();
gotoxy(6,4);
cout<<"P";
gotoxy(20,20);

}
void print_maze(){
cout<<"##############################"<<endl;
cout<<"#                            #"<<endl;
cout<<"#                            #"<<endl;
cout<<"#                            #"<<endl;
cout<<"#                            #"<<endl;
cout<<"#                            #"<<endl;
cout<<"#                            #"<<endl;
cout<<"#                            #"<<endl;
cout<<"#                            #"<<endl;
cout<<"##############################"<<endl;
}
void gotoxy(int x, int y) {
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}