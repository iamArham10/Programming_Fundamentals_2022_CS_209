#include <iostream>
using namespace std;
void stay(string, float);
main()
{
    string month;
    float number_of_stays;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter Number of stays: ";
    cin >> number_of_stays;
    stay(month, number_of_stays);
}
void stay(string month, float nos)
{
    float apartment_price,studio_price,napartment,nstudio;
    
    if (month == "may" || month == "october") {
        apartment_price = nos*65;
        studio_price = nos*50;
        if (nos >= 7 && nos <= 14) {
            studio_price = (studio_price)-((studio_price*5)/100);
        }
        if (nos > 14) {
            studio_price = (studio_price)- ((studio_price*30)/100);
            apartment_price = ((apartment_price)-(apartment_price*10)/100);
        }
    }
    else if (month == "june" or month == "september") {
        apartment_price = 68.70*nos;
        studio_price = 75.20*nos;
        if (nos > 14) {
            studio_price = (studio_price)-((studio_price*20)/100);
            apartment_price = ((apartment_price)-(apartment_price*10)/100);
        }
    }
    else if (month =="july" || month == "august") {
        apartment_price = 77*nos;
        studio_price = 76*nos;
        if (nos > 14) {
            apartment_price = ((apartment_price)-(apartment_price*10)/100);
        }
    }
    cout << "Apartment: " << apartment_price<<endl;
    cout<< "Studio : "<< studio_price;
}