#include <iostream>
using namespace std;
void eligibility(int);
main() {
int age;
cout<<"Enter your age: ";
cin>>age;
eligibility(age);
}
void eligibility(int age) {
if (age >= 18) {
 cout<<"You're Eligible to vote";
 }
if (age<18){
 cout<<"You're not Eligible to vote";
 }
}