#include <iostream>
using namespace std;
float price(string screen,int nor,int noc);

main() {
    string screen;
    int nor,noc;
    cout<<"Enter Screen type: ";
    cin >> screen;
    cout<<"Enter Number of rows: ";
    cin >> nor;
    cout<<"Enter Number of columns: ";
    cin >> noc;
    float result = price(screen,nor,noc);
    cout<<"You have to pay: "<<result<<" euro";

}

float price(string screen,int nor,int noc) {
    if (screen == "Premier") {
        return  nor*noc*12.00;
    }
    else if (screen == "Normal") {
        return nor*noc*7.50;
    }
    else if (screen == "Discount") {
        return noc*nor*5.00;
    } 
    return 0;
}