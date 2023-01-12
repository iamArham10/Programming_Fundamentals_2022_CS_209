#include <iostream>
using namespace std;

int discount(string,string,int);
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
    int result = discount(Day,Month,amount);
    cout<<"You have to pay"<<result;
    }

int discount(string day,string month,int amount) {
    if (day == "sunday") {
        return (amount*90)/100;
    }
    else if(month == "octuber") {
        return (amount*90)/100;
    }
    else {
        return amount;
    }
}