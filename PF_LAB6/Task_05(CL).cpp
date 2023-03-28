#include <iostream>
using namespace std;
main() {
    char going;
    char lecture;
    cout<<"Enter y for going and n for not going: ";
    cin >> going;
    cout<<"Enter y for taking lecture else n: ";
    cin >> lecture;
    if (going == 'y') {
        if (lecture == 'y') {
            cout<<"You are also going";
        }
    }
}