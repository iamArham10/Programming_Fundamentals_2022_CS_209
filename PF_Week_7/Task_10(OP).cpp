#include <iostream>
using namespace std;
main() {
    int sum = 0;
    for (int count = 1;count <= 100;count++){
        sum = sum+count;
    }
    cout<<"Sum of first Hundred numbers is "<<sum;
}