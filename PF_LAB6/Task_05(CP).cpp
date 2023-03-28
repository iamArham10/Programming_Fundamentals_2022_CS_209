#include <iostream>
using namespace std;
float lowest_price(float kilometers,string time);
main() {
    float kilometers;
    string time;
    cout<<"Enter kilometers you want to travel: ";
    cin >> kilometers;
    cout<<"Enter time of the day 'Day or Night' : ";
    cin >> time;
    float result = lowest_price(kilometers,time);
    cout<<"The lowest price in which you can travel is "<<result;

    
}

float lowest_price(float kilometers,string day) {
    float taxi_day = (kilometers*0.79)+0.70;
    float taxi_night = (kilometers*0.90)+0.70;
    float bus_price = (kilometers*0.09);
    float train_price = (kilometers*0.06);
    if (day == "Day") {
        if (kilometers < 20) {
            return taxi_day;
        }
        else if (kilometers < 100) {
            return bus_price;
        }
        else {
            return train_price;
        }
    }
    if (day == "Night") {
        if (kilometers < 20) {
            return taxi_night;
        }
        else if (kilometers < 100) {
            return bus_price;
        }
        else {
            return train_price;
        }
    }

}