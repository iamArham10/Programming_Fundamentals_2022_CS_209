#include <iostream>
using namespace std;
main() {
    int rows;
    cout<<"Enter number of rows: ";
    cin >> rows;
    for (int count = rows; count >= 1; count = count - 1) {
        for (int asterick = 1; asterick <= count ; asterick ++) {
            cout<<" * ";
        }
        cout<<endl;
    }
}