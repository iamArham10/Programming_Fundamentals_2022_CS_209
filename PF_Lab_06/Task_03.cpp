#include <iostream>
using namespace std;
string title(int age,char gender);
main() {
    int age;
    char gender;
    cout<<"Enter your age ";
    cin >> age;
    cout<<"Enter Your gender M or F: ";
    cin >> gender;
    string result = title(age,gender);
    cout<<"Your title is "<<result;
}

string title(int age,char gender) {
    if (gender == 'M') {
        if (age >= 16) {
            return "Mr";
        }
        else {
            return "Master";
        }
    }
    if (gender == 'F') {
        if (age >= 16) {
            return "Ms.";
        }
        else {
            return "Miss";
        }
    }
    
}
