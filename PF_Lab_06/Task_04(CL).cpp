#include <iostream>
using namespace std;
main() {
    int cost;
    string brand;
    cout<<"Enter cost of the dress ";
    cin >> cost;
    cout<<"Enter Brand name ";
    cin >> brand;
    if (cost < 1500) {
        if (brand == "MTJ") {
            cout<<"Yes buy that Dress";
        }
    }
}