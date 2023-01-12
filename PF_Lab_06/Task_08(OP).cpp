#include <iostream>
using namespace std;
main() {
    int number;
    cout<<"Enter number: ";
    cin >> number;
    if (number % 2 == 0) {
        cout<<"Number is even";
    }
    else {
        cout<<"Number is odd";
    }
}