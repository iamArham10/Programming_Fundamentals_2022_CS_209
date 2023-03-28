#include <iostream>
using namespace std;
float price(string fruit,string day,float quantity);
main () {
    string fruit;
    string day;
    float quantity;
    cout<<"Enter Fruid name: ";
    cin >> fruit;
    cout<<"Enter Day: ";
    cin >> day;
    cout<<"Enter Quantity: ";
    cin >> quantity;
    float result = price(fruit,day,quantity);
    if (result == 0 || result == 1) {
        cout<<"ERROR WRITE CORRECT VALUES";
    }
    else {
        cout<<"You have to pay: "<<result<<"$";
    }
    
}
float price(string fruit,string day,float quantity) {
    float amount;
    if (day != "monday" || day != "tuesday" || day != "wednesday" || day !="thursday" || day != "friday" || day != "saturday" || day != "sunday") {
        return 0;
    }
    if (fruit != "banana" || fruit != "apple" || fruit != "orange" || fruit != "grapefruit" || fruit == "kiwi" || fruit != "pineapple") {
        return 1;
    }
    else if (day == "monday" || day == "tuesday" || day == "wednesday" || day =="thursday" || day == "friday" || fruit == "grapes") {
        if (fruit == "banana") {
            amount = quantity*2.50;
            }
        if (fruit == "apple") {
            amount = quantity*1.20;
            }
        if (fruit == "orange") {
            amount = quantity*0.85;
            }
        if (fruit == "grapefruit") {
            amount = quantity*1.45;
            }
        if (fruit == "kiwi") {
            amount = quantity*2.70;
            }
        if (fruit == "pineapple") {
            amount = quantity*5.50;
            }
        if (fruit == "grapes") {
            amount = quantity*3.85;
            }
    }
    else if (day == "saturday" || day == "sunday") {
        if (fruit == "banana") {
            amount = quantity*2.70;
            }
        if (fruit == "apple") {
            amount = quantity*1.25;
            }
        if (fruit == "orange") {
            amount = quantity*0.90;
            }
        if (fruit == "grapefruit") {
            amount = quantity*1.60;
            }
        if (fruit == "kiwi") {
            amount = quantity*3.00;
            }
        if (fruit == "pineapple") {
            amount = quantity*5.60;
            }
        if (fruit == "grapes") {
            amount = quantity*4.20;
            }
    }
    return amount;
}