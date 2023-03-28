#include <iostream>
using namespace std;
int grade(int numbers);
main(){
    int marks;
    cout<<"Enter Your marks: ";
    cin >> marks;
    char result = grade(marks);
    cout<<"Your Grade is "<<result;
}
int grade(int marks) {
    char gr;
    if (marks <= 50) {
        gr = 'F';
    }
    else if (marks <= 60 ) {
        gr = 'E';
    }
    else if (marks <= 70) {
        gr = 'D';
    }
    else if (marks <= 80) {
        gr ='C';
    }
    else if (marks <= 90) {
        gr = 'B';
    }
    else gr = 'A';
    return gr;
}