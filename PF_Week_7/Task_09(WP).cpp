#include <iostream>
using namespace std;
main() {
    int number;
    cout<<"Enter Your number: ";
    cin >> number;
    while (number <= 0) {
        cout<<"Enter your number: ";
        cin >> number;
    }
}