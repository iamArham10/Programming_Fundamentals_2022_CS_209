#include <iostream>
#include <windows.h>
using namespace std;
void maze();
void gotoxy(int x,int y);
void print_pacman(int,int);
void erase_pacman(int,int);
char getCharAtxy(short int x,short int y);
int pacman_x = 5;
int pacman_y = 6;
main() {
	bool game_running = true;
	system("cls");
    maze();
	gotoxy(pacman_x,pacman_y);
	cout<<"P";
	while (game_running) {
		if (GetAsyncKeyState(VK_LEFT)) {
			char nextLocation = getCharAtxy(pacman_x - 1,pacman_y);
			if (nextLocation == ' ') {
				erase_pacman(pacman_x, pacman_y);
				pacman_x = pacman_x-1;
				print_pacman(pacman_x,pacman_y);
				Sleep(100);
			}
		}
		if (GetAsyncKeyState(VK_RIGHT)) {
			char nextLocation = getCharAtxy(pacman_x + 1,pacman_y);
			if (nextLocation == ' ') {
				erase_pacman(pacman_x, pacman_y);
				pacman_x = pacman_x + 1;
				print_pacman(pacman_x,pacman_y);
				Sleep(100);
			}
		}
		if (GetAsyncKeyState(VK_UP)) {
			char nextLocation = getCharAtxy(pacman_x,pacman_y - 1);
			if (nextLocation == ' ') {
				erase_pacman(pacman_x, pacman_y);
				pacman_y = pacman_y - 1;
				print_pacman(pacman_x,pacman_y);
				Sleep(100);
			}
			
		}
		if (GetAsyncKeyState(VK_DOWN)) {
			char nextLocation = getCharAtxy(pacman_x,pacman_y + 1);
			if (nextLocation == ' ') {
				erase_pacman(pacman_x, pacman_y);
				pacman_y = pacman_y + 1;
				print_pacman(pacman_x,pacman_y);
				Sleep(100);
			}
		}
	}
}




void maze() {
	cout<<"###########################"<<endl;
	cout<<"#                         #"<<endl;
	cout<<"#                         #"<<endl;
	cout<<"#                         #"<<endl;
	cout<<"#                         #"<<endl;
	cout<<"#                         #"<<endl;
	cout<<"#                         #"<<endl;
	cout<<"#                         #"<<endl;
	cout<<"#                         #"<<endl;
	cout<<"#                         #"<<endl;
	cout<<"###########################";
}

void gotoxy(int x, int y) {
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void print_pacman(int pacman_x,int pacman_y){
	gotoxy(pacman_x,pacman_y);
	cout<<"P";
}

void erase_pacman(int pacman_x,int pacman_y) {
	gotoxy(pacman_x,pacman_y);
	cout<<" ";
}

char getCharAtxy(short int x, short int y) {
	CHAR_INFO ci;
	COORD xy = {0, 0};
	SMALL_RECT react = {x,y,x,y};
	COORD coordBufSize;
	coordBufSize.X = 1;
	coordBufSize.Y = 1;
	return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &react) ? ci.Char.AsciiChar : ' ';

}