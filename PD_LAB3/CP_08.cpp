#include <iostream>
using namespace std;
main() {
int numb;
cout<<"Enter four digit number ";
cin >> numb;
int first_digit = numb/1000;
int last_three_digit = numb%1000;

int second_digit = last_three_digit / 100;
int last_two_digit = last_three_digit %100;

int second_last_digit = last_two_digit/10;
int last_digit = last_two_digit % 10;

int output;
output = first_digit + second_digit + second_last_digit + last_digit;
cout<<"output is "<<output;





}