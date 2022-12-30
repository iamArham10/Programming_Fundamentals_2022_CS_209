#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void print_maze();
void PlayerMove(int, int);
main() {
system("cls");
print_maze();
int x = 12;
int y = 1;
while (true) 
 {
 PlayerMove(x,y);
 if (y < 9)
  {
   y = y+1;
  }
 if (y == 9) 
  {
  gotoxy(x,y-1);
  cout << " ";
  y = 1;
  }
 }




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
void PlayerMove(int x ,int y) 
 {
 gotoxy(x, y-1);
 cout<<" ";
 if (y == 1){
  gotoxy(12,0);
  cout<<"#";}
 gotoxy(x , y);
 cout<<"P";
 Sleep(200);
 }