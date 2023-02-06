// Create a program that converts a customer's PIN number to its dance equivalent. There is one dance move per digit in the PIN number.
one dance move per digit in the PIN number.
#include <iostream>
using namespace std;
bool valid_code(string value);
void dance_move(int c);
main()
{
// Taking string as input.
    string value;
    cout << "Enter string of code of four digits: ";
    cin >> value;
    if(valid_code(value) == false){
        cout<<"Invalid Input";
//  Program will stop if string is invalid.
        return 0;
    }
//  Converting string to integer.       
    int c = stoi(value);
    dance_move(c);
    

    
}

bool valid_code(string value)
{

    bool isValid = false;
    for (int idx = 0; value[idx] != '\0'; idx++)
    {
        if (value[idx] == '0' || value[idx] == '1' || value[idx] == '2' || value[idx] == '3' || value[idx] == '4' || value[idx] == '5' || value[idx] == '6' || value[idx] == '7' || value[idx] == '8' || value[idx] == '9')
        { isValid = true;
        }
        else {
            isValid = false;
            return isValid;
        }
    }
    return isValid;
}

void dance_move(int c){
    string moves[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    int code[4];
//     using for loop to separate each digit.    
    for (int idx = 3; idx > -1;idx--)
    {   
//      adding each digit to code array.
        code[idx] = c%10;
        c = c/10;
    }
    int index;
//  print dance moves.
    for (int idx = 0; idx < 4;idx++)
    {
        index = idx + code[idx];
        if (index > 9) {
            index = index - 10;
        }
        cout<<moves[index]<<" ";

    }

}
