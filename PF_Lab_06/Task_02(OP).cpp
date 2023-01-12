#include <iostream>
using namespace std;
string same(int n1,int n2,int n3);
main(){
    int n1,n2,n3;
    cout<<"Enter Number 1: ";
    cin >> n1;
    cout<<"Enter Number 2: ";
    cin >> n2;
    cout<<"Enter number 3: ";
    cin >> n3;
    cout<<"Three numbers are "<<same(n1,n2,n3);
}
string same(int n1,int n2,int n3) {
    if (n1 == n2 && n1 == n3) {
        return "same";
    }
    else {
        return "Not same";
    }
}