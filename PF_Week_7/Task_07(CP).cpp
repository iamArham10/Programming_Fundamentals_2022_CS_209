#include <iostream>
using namespace std;
int digits_sum(int number);
main() {
    int number;
    cout<<"Enter your number: ";
    cin >> number;
    int result = digits_sum(number);
    cout<<result;
}

int digits_sum(int number) {
    int sum = 0;
    int last_digit;
    while (number > 0) {
        last_digit = number%10;
        number = number/10;
        sum = sum + last_digit;
    }
    return sum;

}