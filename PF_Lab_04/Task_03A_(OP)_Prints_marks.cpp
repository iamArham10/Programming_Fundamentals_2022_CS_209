#include <iostream>
using namespace std;
void student(string);

main(){
string marks;
cout<<"Enter your marks: ";
cin >> marks;
student(marks);
}

void student(string marks){
cout<<"Marks are: "<<marks;
}