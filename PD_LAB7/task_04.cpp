#include <iostream>
using namespace std;
void amplify(int number);
main() {
    int number;
    cout<<"Enter your number: ";
    cin >> number;
    amplify(number);
}

void amplify(int number) {
    for (int count = 1 ; count <= number ; count++) {
        if (count%4 == 0) {
            cout<<count*10<<" , ";
            }
        else if (count == number){
            cout<<count;
        }
        else {
            cout<<count<<" , ";
        }

    }
}
