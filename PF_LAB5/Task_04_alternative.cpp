#include <iostream>
#include <cmath>
using namespace std;
int OddishOrEvenish(int number);
main() {
	int number;
	cout<<"enter your number five digits only";
	cin >> number;
    OddishOrEvenish(number);
	cout<<OddishOrEvenish;
}
int OddishOrEvenish(int number) {
	int n = 3;
	int sum_a = 0;
	while (n != 0) {
	
	int single = number / (10*n);
	int number = number%(10*n);
	n = n-1;
	sum_a = single + sum_a;
	}
	return sum_a;
	return 0;
	
	
	
}

