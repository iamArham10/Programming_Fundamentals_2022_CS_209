#include <iostream>
using namespace std;
float check_cost(string city,string product,float quantity);
main() {
    string city,product;
    float quantity;
    cout<<"Enter Product: ";
    cin >> product;
    cout<<"Enter City: ";
    cin >> city;
    cout<<"Enter number of quantities: ";
    cin >> quantity;
    float result = check_cost(city,product,quantity);
    cout<<"Your Total Amount is "<<result;
}

float check_cost(string city,string product,float quantity) {
    if (product == "coffee") {
        if (city == "Sofia") {
            return 0.50*quantity;
        }
        else if (city == "Plovdiv") {
            return 0.40*quantity;
        }
        else if (city == "Varna") {
            return 0.45*quantity;
        }
    }
    else if (product == "water") {
        if (city == "Sofia") {
            return 0.80*quantity;
        }
        else if (city == "Plovdiv" || city == "Varna") {
            return 0.70*quantity;
        }
    }
    else if (product == "beer") {
        if (city == "Sofia") {
            return 1.20*quantity;
        }
        else if (city == "Plovdiv") {
            return 1.15*quantity;
        }
        else if(city == "Varna") {
            return 1.10*quantity;
        }
    }
    else if (product == "sweets") {
        if (city == "Sofia") {
            return 1.45*quantity;
        }
        else if(city == "Plovdiv") {
            return 1.30*quantity;
        }
        else if (city == "Varna") {
            return 1.35*quantity;
        }
    }
    else if (product == "peanuts") {
        if (city == "Sofia") {
            return 1.60*quantity;
        }
        else if (city == "Plovdiv") {
            return 1.50*quantity;
        }
        else if (city == "Varna") {
            return 1.55*quantity;
        }
    }
}
