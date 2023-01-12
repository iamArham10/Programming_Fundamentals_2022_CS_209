#include <iostream>
using namespace std;
int discount(string day,string month,int amount);
main() {
    string Day;
    string Month;
    int amount;
    cout<<"Enter Day: ";
    cin >> Day;
    cout<<"Enter Months: ";
    cin >> Month;
    cout<<"Enter Amoung: ";
    cin >> amount;
    int result =  discount(Day,Month,amount);
    cout<<"you have to pay: "<<result;
}
int discount(string day,string month,int amount) {
    if (day == "sunday") {
        if (month == "Octuber") {
            return (amount*90)/100;
        }
        else {
            return amount;
        }
    }
    else {
        return amount;
    }
}