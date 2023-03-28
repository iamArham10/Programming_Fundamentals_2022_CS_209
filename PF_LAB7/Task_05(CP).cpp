#include <iostream>
using namespace std;
int digit_count(int number);


main() {
    int number;
    cout<<"enter Your number: ";
    cin >> number;
    cout<<digit_count(number);
}

int digit_count(int number) {
    int count = 1;
    while (number / 10 > 0) {
        number = number / 10;
        count = count + 1;
    }
    return count;
    
}