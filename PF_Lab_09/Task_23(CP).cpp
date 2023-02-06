// Create a program that takes a string and print a new string with something on it

#include <iostream>
using namespace std;
main()
{
    string word;
    cout<<"Enter Word: ";
    getline(cin, word);
    string s = "something ";
    char output[100];
    int index = 0;
    for (int idx = 0; idx < 10;idx++)
    {
        output[index] = s[idx];
        index = index + 1;
        
        
    }
    
    for (int itx = 0; word[itx] != '\0';itx++)
    {
        output[index] = word[itx];
        output[index+1]='\0';
        index = index + 1;
    }
    cout<<output;

}
