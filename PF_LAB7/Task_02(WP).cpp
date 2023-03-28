#include <iostream>
using namespace std;
main() {
    int sum = 0;
    for (int count = 1;count<=5;count++) {
        sum = count+sum;
    }
    cout<<"The sum of first five numbers is : "<<sum;
}