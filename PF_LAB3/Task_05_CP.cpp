#include <iostream>
using namespace std;
main() {
string name;
float fsc_marks;
float matric_marks;
float ecat_marks;
cout<<"Enter your name: ";
cin >> name;
cout<<"Enter your Fsc 1st year Marks: ";
cin >> fsc_marks;
cout<<"Enter your Matric Marks: ";
cin >> matric_marks;
cout<<"Enter your Ecat marks: ";
cin >> ecat_marks;
float fsc_marks_p = (fsc_marks / 550) * 40;
float matric_marks_p = (matric_marks /1100) * 10;
float ecat_marks_p = (ecat_marks / 400)* 50;
float aggregrate;
aggregrate = fsc_marks_p + matric_marks_p + ecat_marks_p;
cout<<"Your Aggregrate is "<<aggregrate<<"%";	




}