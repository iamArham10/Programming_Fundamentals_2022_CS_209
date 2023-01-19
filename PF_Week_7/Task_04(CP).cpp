#include <iostream>
using namespace std;
void fibonacci(int number);
main() {
    int number;
    cout<<"Enter Number: ";
    cin >> number;
    fibonacci(number);
}
void fibonacci(int number) {
    int a = 1;
    int b = 0;
    int fib = 0;
    for (int count = 1;count<=number;count++) {
        cout<<fib<<endl;
        fib = a + b;
        a = b;
        b = fib;
        
    }

}