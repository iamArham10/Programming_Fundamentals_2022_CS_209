#include <iostream>
using namespace std;
main() {
    string alphabets = "abcdefghijklmnopqrstuvwxyza";
    string word;
    cout<<"Enter Your word: ";
    cin >> word;
    for (int idx = 0; word[idx] != '\0';idx++)
    {
        for (int ijx = 0; ijx <26;ijx++){
            if (alphabets[ijx] == word[idx]){
                cout<<alphabets[ijx+1];
            }
        }
    }
    
}