#include <iostream>
using namespace std;
void cargo(int number);
main() {
    int number;
    cout<<"Enter count of cargo transportation: ";
    cin >> number;
    cargo(number);
}

void cargo(int number) {
    float weight = 0;
    float minibus_weight = 0;
    float truck_weight = 0;
    float train_weight = 0;
    float sum_of_cargo = 0;
    for (int count = 1; count <= number; count++) {
        cout<<"Enter weight of cago: ";
        cin >> weight;
        sum_of_cargo = sum_of_cargo + weight;
        if (weight <=3.00 ) {
            minibus_weight = minibus_weight + weight;
        }
        if (weight > 3 && weight <= 11) {
            truck_weight = truck_weight + weight;
        }
        if (weight > 11) {
            train_weight = train_weight + weight;
        }
      
    }
    float minibus_p = (minibus_weight/sum_of_cargo)*100.0;
    float truck_p = (truck_weight/sum_of_cargo)*100.0;
    float train_p = (train_weight/sum_of_cargo)*100.0;
    float minibus_total = minibus_weight*200;
    float truck_total = truck_weight*175;
    float train_total = train_weight*120;
    float average_price = (minibus_total+truck_total+train_total)/sum_of_cargo;
    cout<<"Average Price: "<<average_price<<endl;
    cout<<"Percentage of the cargo by minibus is "<<minibus_p<<"%"<<endl;
    cout<<"Percentage of the cargo by truck is "<<truck_p<<"%"<<endl;
    cout<<"Percentage of the cargo by train is "<<train_p<<"%"<<endl;
    

}