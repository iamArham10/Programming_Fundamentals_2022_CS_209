#include <iostream>
using namespace std;
void even_or_odd(int);

main(){
int number;
cout<<"Enter your number: ";
cin >> number;
even_or_odd(number);
}

void even_or_odd(int number){
if (number%2 == 0) 
 {cout<<"your number "<<number<<" is even";
 }
if (number%2 != 0) 
 {cout<<"your number "<<number<<" is odd";
 }
if (number == 0)
 {cout<<"your number "<<number<<" is neither even nor odd";
 }
}