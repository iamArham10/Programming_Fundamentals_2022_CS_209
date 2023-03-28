#include <iostream>
using namespace std;
int charges(char service_code,string day,float minutes);
main() {
    char service_code;
    string day;
    float minutes;
    cout<<"Enter the Sevice code ";
    cin >> service_code;
    cout<<"Enter day or night: ";
    cin >> day;
    cout<<"Enter the number of minutes the service was used: ";
    cin >> minutes;
    int result = charges(service_code,day,minutes);
    cout<<"The Charges are: "<<result<<"$";
}
int charges(char sc,string day,float minutes) {
    float charge = 0;
    if (sc == 'r' || sc == 'R') {
        if (minutes <= 50) {
            charge = 10.00;
        }
        if (minutes > 50) {
            charge = 10.00+(minutes-50)*0.20;
        }
    }
    else if (sc == 'p' || 'P') {
        if (day == "day") {
            if (minutes <= 75) {
                charge = 25.00;
            }
            if (minutes > 75) {
                charge = 25.00+(minutes-75.00)*0.10;
            }
        }
        if (day == "night") {
            if (minutes <= 100) {
                charge = 25.00;
            }
            if (minutes > 100) {
                charge = 25.00 + (minutes-100)*0.05;
            }
        }
    }
    return charge;

}