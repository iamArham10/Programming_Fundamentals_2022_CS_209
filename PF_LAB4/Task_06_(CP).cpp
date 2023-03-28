#include <iostream>
using namespace std;
main(){
string  Day;
int total_purchase_amount;
cout<<"Enter day ie:sunday.etc : ";
cin >> Day;
cout<<"Enter total purchase amount: ";
cin >> total_purchase_amount;
if (Day == "sunday") 
 {
 cout<<"The amount you have to pay is "<<(total_purchase_amount*90)/100;
 }
if (Day != "sunday") 
 {
 cout<<"The amount you have to pay is "<<total_purchase_amount;
 }
}
