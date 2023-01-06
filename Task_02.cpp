#include <iostream>
using namespace std;
void capornot(string alphabet);
main() {
    string alphabet;
    cout<<"Enter A or a ";
    cin >> alphabet;
    capornot(alphabet);


}
void capornot(string alphabet) {
    if (alphabet == "A") {cout<<"Number is Capital";}
    if (alphabet == "a") {cout<<"Number is small";}


}