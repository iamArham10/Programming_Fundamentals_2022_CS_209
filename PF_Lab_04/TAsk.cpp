#include <iostream>
using namespace std;
void payable_amount(string,int);
main() {
string day;
int amount;
while (true) { 
 cout<<"Enter Day :";
 cin >> day;
 cout<<"Enter amount :";
 cin >> amount;
 payable_amount(day,amount);
 }
}
void payable_amount(string day, int total_amount) {
if (day == "sunday") 
 {
 cout<<"Your total payable amount is "<< (total_amount*90)/100;
 }

if (day != "sunday" )
 {
  cout<<"Your total payable amount is "<< (total_amount*95)/100<<endl;
 }
}