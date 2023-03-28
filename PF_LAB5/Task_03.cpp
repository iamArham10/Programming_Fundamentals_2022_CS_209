#include <iostream>
#include <cmath>
using namespace std;
int OddishOrEvenish(int number);
bool symmetrical(int number);


main() {
	int number;
	cout<<"enter your number five digits only";
	cin >> number;
        int sum = OddishOrEvenish(number);

}
int OddishOrEvenish(int number) {
	int first_digit = number/10000;
	int last_four_numbers = number%10000;
	int second_digit = last_four_numbers / 1000;
	int last_three_numbers = last_four_numbers % 1000;
	int third_digit = last_three_numbers/100;
	int last_two_digits = last_three_numbers%100;
	int fourth_digit = last_two_digits/10;
	int last_digit = last_two_digits%10;
	int sum = first_digit+second_digit+third_digit+fourth_digit+last_digit;
	if (sum/2 == 0) {cout<<"Number is Even";}
	if (sum/2 != 0) {cout<<"Number is Odd";}
	return 0;