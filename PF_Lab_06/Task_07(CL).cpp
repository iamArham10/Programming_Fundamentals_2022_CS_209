#include <iostream>
using namespace std;
main() {
    int number;
    cout<<"Enter your marks: ";
    cin >> number;
    if (number > 50) {
        cout<<"You have Passed";
    }
    else {
        cout<<"You have FAILED";
    }
}