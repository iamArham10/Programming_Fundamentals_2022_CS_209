#include <iostream>
using namespace std;
float calculates(int budget,string category,int peoples);
main() {
    int budget,people;
    string category;
    cout<<"Enter Your Budget: ";
    cin >> budget;
    cout<<"Enter Your categor: ";
    cin >> category;
    cout<<"Enter Number of peoples: ";
    cin >> people;
    float result =  calculates(budget,category,people);
    if (result >= 0) {
        cout<<"Yes! You have "<<result<<" QR left";
    }
    else {
        cout<<"Not enough Money you need "<<result*-1<<" QR Money";
    }
    

}

float calculates(int budget,string category,int peoples) {
    float remaining;
    float price_of_ticket = 0;
    if (peoples >= 1 && peoples <= 4) {
        remaining = (budget*25)/100;
    }
    else if (peoples >= 5  && peoples <= 9) {
        remaining = (budget*40)/100;
    }
    else if (peoples >= 10 && peoples <= 24) {
        remaining = (budget*50)/100;
    }
    else if (peoples >= 25  && peoples <= 49) {
        remaining = (budget*60)/100;
    }
    else if (peoples >= 50) {
        remaining = (budget*75)/100;
    }
    if (category == "VIP") {
        price_of_ticket =  499.99;
        }
    else if (category == "Normal") {
        price_of_ticket = 249.99;
    }
    float total_budget = price_of_ticket*peoples;
    return remaining-total_budget;
}
