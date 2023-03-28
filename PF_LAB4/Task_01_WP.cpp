#include <iostream>
using namespace std;
void add(int num_1,int num_2);
main(){
int num_1,num_2;
cout<<"Enter first number: ";
cin >> num_1;
cout<<"Enter second number: ";
cin >> num_2;
add(num_1,num_2);
}

void add(int n_1,int n_2) {
int sum = n_1 + n_2;
cout<<"the sum of number is '"<<sum<<"'";
}