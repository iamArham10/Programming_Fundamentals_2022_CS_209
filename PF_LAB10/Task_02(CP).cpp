// count the number of times a particular letter shows up in the array search.
#include <iostream>
using namespace std;
#include <windows.h>
main() {
// Taking input of lenght of string array.
    int length;
    cout<<"Enter how many words you want to enter: ";
    cin >> length;

    // string array input from user
    string words[length];
    for(int idx = 0;idx < length; idx++)
    {
        cout<<"Enter word: ";
        cin >> words[idx];
    }
// taking character as input.
    char letter;
    cout<<"Enter letter you want to search: ";
    cin >> letter;


    string temporary;
    int count = 0;


    for(int idx = 0;idx < length;idx++)
    // this for loop will store string in temporary string 
    {   temporary = words[idx];
    // this loop will check if character of string stored in temporary has required characcter
        for (int itx = 0; temporary[itx] != '\0';itx++)
        {
            if (temporary[itx] == letter)
            {
                count = count + 1;
                
            }
        }
    }


    system("cls");
    cout<<"The number of times letter '"<<letter<<"' appears is "<<count;

    
}