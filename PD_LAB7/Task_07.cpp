#include <iostream>
using namespace std;
void percentage(int number);
main() {
    int number;
    cout<<"Enter number: ";
    cin >> number;
    percentage(number);
}
void percentage(int number) {
    int p1 = 0;
    int p2 = 0;
    int p3 = 0;
    int input;
    float digit_count = 0;
    for (float count = 1; count <= number; count++){
        cout<<"Enter Digit: ";
        cin >> input;
        if (input % 2 == 0) {
            p1 = p1 + 1;
        }
        
        if (input % 3 == 0) {
            p2 = p2 + 1;
        }
        
        if (input % 4 == 0) {
            p3 = p3 + 1;
        }
        digit_count++;
        
          
    }
    float p1_p = (p1/(digit_count))*100.00;
    float p2_p = (p2/(digit_count))*100.00;
    float p3_p = (p3/(digit_count))*100.00;
    cout<<"Percentage of divisible by 2: "<<p1_p<<"%"<<endl;
    cout<<"Percentage of divisible by 3: "<<p2_p<<"%"<<endl;
    cout<<"Percentage of divisible by 4: "<<p3_p<<"%"<<endl;
}
