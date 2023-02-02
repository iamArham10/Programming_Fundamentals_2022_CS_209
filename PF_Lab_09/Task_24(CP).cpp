#include <iostream>
using namespace std;
main() {
    string sentence;
    getline(cin, sentence);
    string new_string;
    for (int idx = 0; sentence[idx] != '\0';idx++)
    {
        if (sentence[idx] != 'a' && sentence[idx] != 'e' && sentence[idx] != 'i' && sentence[idx] != 'o' && sentence[idx] != 'u' )
        {
            cout<<sentence[idx];
        }

    }
}