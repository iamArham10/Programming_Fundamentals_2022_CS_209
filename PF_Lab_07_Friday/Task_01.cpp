#include <iostream>
using namespace std;
main() {
    int rows;
    cout<<"Enter Number of rows: ";
    cin >> rows;
    for (int count = 1; count<=rows;count++){
        for(int asterick = 1; asterick <= count ; asterick ++) {
            cout<<" * ";
        }
        cout<<endl;
    }
}