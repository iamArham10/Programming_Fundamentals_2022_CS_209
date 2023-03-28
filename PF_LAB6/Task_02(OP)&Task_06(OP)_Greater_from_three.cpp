#include <iostream>
using namespace std;
int Greater_number(int n1,int n2,int n3) {
    if (n1 > n2) {
        if (n1>n3) {
            return n1;
        }
        else {
            return n3;
        }
    }
    if (n2>n3) {
        if (n2>n1) {
            return n2;
        }
        else {
            return n1;
        }
    }
    else {
        return n3;
    }

}
main(){
    int num1;
    int num2;
    int num3;
    cout<<"Enteer First number: ";
    cin >> num1;
    cout<<"Enter Second number: ";
    cin >> num2;
    cout<<"Enter Third number: ";
    cin >> num3;
    cout<<"The Greater Number is "<<Greater_number(num1,num2,num3);
}