#include <iostream>
using namespace std;
void larger(int,int);

main() {
int num_1,num_2;
cout<<"Enter first number: ";
cin >> num_1;
cout<<"Enter second number: ";
cin >> num_2;
larger(num_1,num_2);

}

void larger(int num_1, int num_2) {
if (num_1 > num_2) 
 {
 cout<<"The first number "<<num_1<<" is greater than the second number "<<num_2;
 }
if (num_1 < num_2) 
 {
 cout<<"The second number "<<num_2<<" is greater than the first number "<<num_1;
 }
}