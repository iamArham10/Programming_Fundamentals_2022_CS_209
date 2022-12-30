#include <iostream>
using namespace std;
void payable_amount(string , int);
main(){
string day;
int total_purchase_amount;
cout<<"Enter Day (ie sunday) : ";
cin >> day;
cout<<"Enter Total Payable Amount: ";
cin >> total_purchase_amount;
payable_amount(day,total_purchase_amount);
}
void payable_amount(string day, int total_purchase_amount) {
if (day == "sunday") 
 {
 cout<<"Your Total Amount is "<<(total_purchase_amount*90)/100;
 }
if(day!= "sunday") 
 {
 cout<<"Your Total Amount is "<<total_purchase_amount;
 }

}