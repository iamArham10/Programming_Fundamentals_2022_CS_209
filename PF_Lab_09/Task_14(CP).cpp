// Program returns number of vowels in a given string
#include <iostream>
using namespace std;
int count_vowel(string);
main()
{
    string word;
    cout<<"Enter Word: ";
    getline(cin, word);
    int result = count_vowel(word);
    cout<<"The number of vowels in the string '"<<word<<"' is "<<result;
}
int count_vowel(string w)
{
    int vowel = 0;
    for (int i = 0; w[i] != '\0';i++)
    {
        if (w[i] == 'a' || w[i] == 'i' || w[i] =='o' || w[i] == 'u' || w[i] == 'e')
        {
            vowel = vowel + 1;
        }
        
    }
    return vowel;

}