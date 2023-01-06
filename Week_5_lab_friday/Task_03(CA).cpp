#include <iostream>
#include <cmath>
using namespace std;
void taxCalculator(string type,float price);
main() {
    string type;
    float price;
    cout<<"Enter type of vehicle ";
    cin >> type;
    cout<<"Enter price of vehicle: ";
    cin >> price;
    taxCalculator(type,price);
}

void taxCalculator(string type,float price) {
    float tax_p = 0; 
    if (type == "M") {tax_p = 6;}
    if (type == "E") {tax_p = 8;}
    if (type == "S") {tax_p = 10;}
    if (type == "V") {tax_p = 12;}
    if (type == "T") {tax_p = 15;}
    float Tax_Amount = (price*tax_p)/100;
    float Final_price = price+Tax_Amount;
    cout<<"The final price of type "<<type<<" After adding tax is "<<Final_price;


}