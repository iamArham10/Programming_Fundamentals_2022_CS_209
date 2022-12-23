#include <iostream>
using namespace std;
main() {
string name;
float subject_1;
float subject_2;
float subject_3;
float subject_4;
float subject_5;
cout<<"Enter your name ";
cin >> name;
cout<<"Enter Marks of subject 1 ";
cin >> subject_1;
cout<<"Enter Marks of subject 2 ";
cin >> subject_2;
cout<<"Enter Marks of subject 3 ";
cin >> subject_3;
cout<<"Enter Marks of subject 4 ";
cin >> subject_4;
cout<<"Enter Marks of subject 5 ";
cin >> subject_5;
float average;
average = (subject_1 + subject_2 + subject_3 + subject_4 + subject_5)/5;
cout<<name<<"'s average is "<<average;
}