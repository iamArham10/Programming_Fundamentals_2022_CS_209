#include <iostream>
using namespace std;
void dance(string M[10], int code);
main() {
    string Moves[10] = {"Shimmy", "Shake", "Piruette","Slide","Box Step","Headspin","Dosado","Pop","Lock","Arebesque"};
    int code;
    cout<<"Enter Code: ";
    cin >> code;
    bool correct = true;
    while (correct) {
        if (code == 0000) {
            correct = false;
        }
        else if (code > 9999 || code < 1000  ){
            cout<<"Enter Code: ";
            cin >> code;
            continue;
        }
        
        
        else {
            correct = false;
        }

    }
    dance(Moves, code);

    
}
void dance(string Moves[10],int code) {
    string third[4];
    int first_digit = code/1000;
    code = code%1000;
    int second_digit = code/100;
    code = code%100;
    int third_digit = code/10;
    int fourth_digit = code%10;
    third[0] = Moves[first_digit];
    third[1] = Moves[second_digit];
    third[2] = Moves[third_digit];
    third[3] = Moves[fourth_digit];
    for (int idx = 0; idx < 4; idx++)
    {
        cout<<third[idx]<<" ";
    }
    

}