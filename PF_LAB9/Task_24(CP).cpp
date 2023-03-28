#include <iostream>
using namespace std;
string novowel(string);
main()
{   
    // Taking string as input
    string sentence;
    getline(cin, sentence);
    cout<<novowel(sentence);
}

string novowel(string sentence)
{   
    // creating new character array
    char new_string[100];
    int index = 0;
    // storing words that are not vowel in a new array
    for (int idx = 0; sentence[idx] != '\0'; idx++)
    {
        if (sentence[idx] != 'a' && sentence[idx] != 'e' && sentence[idx] != 'i' && sentence[idx] != 'o' && sentence[idx] != 'u')
        {
            new_string[index] = sentence[idx];
            index = index + 1;
        }
    }
    return new_string;
}
