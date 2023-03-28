#include <iostream>
using namespace std;

int GCF(int num1,int num2){
    int factor;
    for (int count = 1; count<= num1; count++) {
        if (num1 % count == 0 && num2 % count == 0){
            factor = count;
        }
    }
    return factor;
    
}
int LCM(int a,int b,int gcf){
    return (a*b)/gcf;
}

main() {
    int num1,num2;
    cout<<"Enter num1: ";
    cin >> num1;
    cout<<"Enter num2: ";
    cin >> num2;
    int result;
    if (num1 < num2) {
        result = GCF(num1,num2);
    }
    else {
        result = GCF(num2,num1);
    }
    int my_lcm = LCM(num1,num2,result);
    cout<<"The LCM IS "<<my_lcm;
    
}
