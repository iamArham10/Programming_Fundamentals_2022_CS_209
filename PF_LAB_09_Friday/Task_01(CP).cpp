#include <iostream>
using namespace std;
main() {

    string fruit[4] = {"peach","apple","guava","watermelon"};
    int price[4] = {60,70,40,30};
    string fruit_name;
    int quantity;
    cout<<"Enter The name of the fruit: ";
    cin >> fruit_name;
    cout<<"Enter The Quantity of fruit: ";
    cin >> quantity;
    int total;
    for (int idx = 0; idx < 4; idx++)
    {
        if (fruit[idx] == fruit_name)
        {
            total = price[idx]*quantity;
            break;
        }
    }
    cout<<"Total price is "<<total;
}