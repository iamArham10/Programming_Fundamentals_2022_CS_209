#include <iostream>
using namespace std;
main() {
    int numbers[5] = {4,5,2,1,3};
    int max = numbers[0];
    int a;
    for (int j = 1; j < 5;j++)
    {
        a = numbers[j];
        if (a > max){
            max = a;
        }
    }
    cout<<max;
    }