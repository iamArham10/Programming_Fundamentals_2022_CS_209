#include <iostream>
using namespace std;
main() {
float veg_price_per_kg;
float fruit_price_per_kg;
int total_kg_of_veg;
int total_kg_of_fruit;
cout<<"Enter vegetables price per kg: ";
cin >> veg_price_per_kg;
cout<<"Enter Fruit price per kg: ";
cin >> fruit_price_per_kg;
cout<<"Enter total kg of veg: ";
cin >> total_kg_of_veg;
cout<<"Enter total kg of fruit: ";
cin >> total_kg_of_fruit;
float price_of_veg = veg_price_per_kg * total_kg_of_veg;
float price_of_fruit = fruit_price_per_kg * total_kg_of_fruit;
float total_amount = price_of_veg + price_of_fruit;
float amount_rup = total_amount / 1.94;
cout<<"Total price is "<<amount_rup<<" euro";
}