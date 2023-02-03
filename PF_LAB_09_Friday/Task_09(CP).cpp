#include <iostream>
using namespace std;
main() {
    int c;
    string moves[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado","Pop", "Lock", "Arabesque"};
    cout<<"Enter string of code of four digits: ";
    cin >> c;
    int code[4];
    for (int idx = 3; idx > -1;idx--)
    {
        code[idx] = c%10;
        c = c/10;
    }
    int index;
    for (int idx = 0; idx < 4;idx++)
    {
        index = idx + code[idx];
        if (index > 9) {
            index = index - 10;
        }  
        cout<<moves[index]<<" ";

    }
    

    
}