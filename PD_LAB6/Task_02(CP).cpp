#include <iostream>
using namespace std;
void result(float ,float,float ,float ,float ,string );
main() {
    float english,maths,chemistry,social_science,biology;
    string name;
    cout<<"Enter marks in english: ";
    cin >> english;
    cout<<"Enter marks in maths: ";
    cin >> maths;
    cout<<"Enter marks in chemistry: ";
    cin >> chemistry;
    cout<<"Enter marks in social sciences: ";
    cin >> social_science;
    cout<<"Enter marks in biology: ";
    cin >> biology;
    cout<<"Enter your name: ";
    cin >> name;
    result(english,maths,chemistry,social_science,biology,name);





}

void result(float english,float maths,float chemistry,float social_science,float biology,string name) {
    float total_marks = english+maths+chemistry+social_science+biology;
    float percentage = (total_marks/500.0)*100.0;
    string grade;
    if (percentage > 90 && percentage <= 100) {
        grade = "A+";
    }
    else if (percentage > 80 && percentage <= 90) {
        grade = "A";
    }
    else if (percentage > 70 && percentage <= 80) {
        grade = "B+";
    }
    else if (percentage > 60 && percentage <= 70) {
        grade = "B";
    }
    else if (percentage > 50 && percentage <= 60) {
        grade = "C";
    }
    else if (percentage > 40 && percentage <= 50) {
        grade = "D";
    }
    else if (percentage <= 40) {
        grade = "F";
    }
    cout<<"Student name: "<<name<<endl;
    cout<<"Total marks: "<<total_marks<<endl;
    cout<<"Percentage: "<<percentage<<endl;
    cout<<"Grade: "<<grade;


}