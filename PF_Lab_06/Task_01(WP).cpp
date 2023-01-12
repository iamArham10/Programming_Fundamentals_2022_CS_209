#include <iostream>
using namespace std;
main() {
    int cost;
    string brand;
    cout<<"Enter Cost of the dress";
    cin >> cost;
    cout<<"Enter Brand name";
    cin >> brand;
    if (cost < 1500 && brand == "MTJ") {
        cout<<"Buy that Dress.";
    }
} 