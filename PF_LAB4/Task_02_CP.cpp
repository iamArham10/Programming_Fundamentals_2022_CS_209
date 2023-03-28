#include <iostream>
using namespace std;
void add();

main(){
add();
}
void add() {
int num_1,num_2;
cout<<"Enter first number: ";
cin >> num_1;
cout<<"Eneter second number: ";
cin >> num_2;
int sum = num_1 + num_2;
cout<<"the sum is "<<sum;
}