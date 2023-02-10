#include <iostream>
using namespace std;
int count(string sentence);
main()
{
    string sentence;
    cout << "Enter sentence: ";
    cin >> sentence;
  

    int spaces = count(sentence);
    cout<<spaces;
    
}
int count(string sentence)
{
    int c = 0;
    for (int idx = 0; sentence[idx] != '\0'; idx++)
    {
        if (sentence[idx] == ' ')
        {
            c = c + 1;
        }
        return c;
    }
}
