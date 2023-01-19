#include <iostream>
using namespace std;
main() {
    char choice;
    cout<<"Enter your choice: ";
    cin >> choice;
    while (choice == 'y') {
        cout<<"I am happy"<<endl;
        cout<<"Enter your choice: ";
        cin >> choice;
    }
}