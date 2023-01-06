#include <iostream>
using namespace std;
bool symmetrical(int number);


main() {
    int number;
    cout<<"Enter your number: ";
    cin >> number;
    if (symmetrical(number) == 1) {cout<<"Number is symmetrical";}
    if (symmetrical(number) == 0) {cout<<"number is Not symmetrical";}


}
bool symmetrical(int number) {
    return (number/100 == number%10);

}