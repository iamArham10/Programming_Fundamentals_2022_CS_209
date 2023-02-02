// a program to print the sum and average of first five natural numbers
#include <iostream>
using namespace std;
main() {
    int sum = 0;
    int average = 0;
    int series[5] = {1,2,3,4,5};
    for (int i = 0;i < 5;i++){
        sum = sum + series[i];
    }
    cout<<"Sum is "<<sum<<endl;
    average = sum/5;
    cout<<"Average is "<<average<<endl;
}