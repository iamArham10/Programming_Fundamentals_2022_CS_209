#include <iostream>
using namespace std;
main()
{
    string word;
    cout<<"Enter Word: ";
    getline(cin, word);
    string s = "something ";
    // for (int idx = 0; word[idx] != '\0';idx++)
    // {
    //     cout<<word[idx];
        
    // }
    string add[2+1] = {s,word};
    for (int idx = 0; add[idx] != "\0";idx++)
    {
        cout<<add[idx];
    }

}