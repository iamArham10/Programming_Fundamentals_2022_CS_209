#include <iostream>
using namespace std;
void reverse_string(string sentence);
main()
{
    string sentence;
    getline(cin, sentence);
    reverse_string(sentence);
}
void reverse_string(string sentence)
{
    int itx = 0;
    int index = 0;
    char word[100];
    string words[100];
    int count = 0;

    for (int idx = 0; sentence[idx] != '\0'; idx++)
    {
        if (sentence[idx] == ' ')
        {
            words[index] = word;
            count++;

            itx = 0;

            index = index + 1;
            continue;
        }
        word[itx] = sentence[idx];

        word[itx + 1] = '\0';

        itx = itx + 1;
    }
    words[index] = word;

    for (int idx = count; idx >= 0; idx--)
    {
        cout << words[idx] << " ";
    }
}