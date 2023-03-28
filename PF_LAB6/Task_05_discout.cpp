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
    int result = discount(Day,Month,amount);
    cout<<"You have to pay "<<result;
}
int discount(string day,string month,int amount) {
    if (day == "sunday") {
        if (month == "october") {
            return (amount*90)/100;
        }
        else if (month == "march") {
            return (amount*90)/100;
        }
        else if (month == "august") {
            return (amount*90)/100;
        }
        else {
            return amount;
        }
    }
    else if (day == "monday") {
        if (month == "november") {
            return (amount*95)/100;
        }
        if (month == "december") {
            return (amount*95)/100;
        }
        else {
            return amount;
        }
    }
    else {
        return amount;
    }
}