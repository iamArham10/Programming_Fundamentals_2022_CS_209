#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void printMenu();
void calculateAggregate(string,float,float,float);
void compare(string std1, int ecat_1,string std2,int ecat_2);

main() {
string std1,std2;
float fscMarks_1,fscMarks_2,matricMarks_1,matricMarks_2,ecatmarks_1,ecatmarks_2;
printMenu();
cout<<"Enter name of student 1: ";
cin >> std1;
cout<<"Enter your fsc marks: ";
cin >> fscMarks_1;
cout<<"Enter your matric marks: ";
cin >> matricMarks_1;
cout<<"Enter ecat marks: ";
cin >> ecatmarks_1;

cout<<"Enter name of student 2: ";
cin >> std2;
cout<<"Enter your fsc marks: ";
cin >> fscMarks_2;
cout<<"Enter your matric marks: ";
cin >> matricMarks_2;
cout<<"Enter ecat marks: ";
cin >> ecatmarks_2;
cout<<"student one has aggregate: ";
calculateAggregate(std1,matricMarks_1,fscMarks_1,ecatmarks_1);
cout<<endl;
cout<<"student two ahs aggregate: ";
calculateAggregate(std2,matricMarks_2,fscMarks_2,ecatmarks_2);
cout<<endl;
compare(std1,ecatmarks_1,std2,ecatmarks_2);

}
void gotoxy(int x, int y) {
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void printMenu();
void calculateAggregate(string name,float matricMarks,float fscMarks,float ecatMarks) {
float aggregate = (matricMarks/1100)*30 + (fscMarks/550)*30 + (ecatMarks/400)*40; 
cout<<aggregate;
}
void compare(string std1, int ecat_1,string std2,int ecat_2){
if (ecat_1 > ecat_2) {cout<<std1<<" has roll no 1 and "<<std2<<" has roll no 2"<<endl;}
if (ecat_2 > ecat_1) {cout<<std2<<" has roll no 1 and "<<std1<<" has roll no 2"<<endl;}
}
void printMenu() {
cout<<"*********************************************************************************************"<<endl;            
cout<<"                                  UET LAHORE ADMISSION SYSTEM                                "<<endl;
cout<<"*********************************************************************************************"<<endl; 

}

