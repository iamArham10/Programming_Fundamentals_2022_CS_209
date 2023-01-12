#include <iostream>
using namespace std;
char grade(int marks);
main() {
    int marks;
    cout <<"Enter your marks ";
    cin >> marks;
    char result = grade(marks);
    cout<<"Your Grade is "<<result;
}
char grade(int marks) {
    if (marks <= 50) {
        return 'F';
    }
    else if (marks <= 60) {
        return 'E';
    }
    else if (marks <= 70) {
        return 'D';
    }
    else if (marks <= 80) {
        return 'C';
    }
    else if (marks <= 90) {
        return 
        'B';
    }
    else if (marks <= 100){
        return 'A';
    }
}