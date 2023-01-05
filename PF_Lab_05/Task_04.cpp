#include <iostream>
#include <cmath>
using namespace std;
int OddishOrEvenish(int number);
main() {
	int number;
	cout<<"enter your number five digits only";
	cin >> number;
    OddishOrEvenish(number);
}
int OddishOrEvenish(int number) {
	int n = 4;
	while (n>1) {
	int sum_a = 0;
	int number = number%(10*n)
	n = n-1;
	int single = number / (10*n);
	sum_a = single + sum_a;
	return sum;
	}
	return 0;
	
	
}

