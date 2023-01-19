#include <iostream>
using namespace std;
void print_table(int);
main() {
    int number;
    cout<<"Enter Number: ";
    cin >> number;
    print_table(number);
}

void print_table(int n) {
    for (int num = 1; num <= 10; num++){
        cout<<n<<" * "<<num<<"  =  "<< num*n<<endl;
    }
}