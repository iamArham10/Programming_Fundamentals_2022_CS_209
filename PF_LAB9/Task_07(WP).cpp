// checks if a given character is in a string
#include <iostream>
using namespace std;
main() {
        
        char n;
        string name;
        cout<<"Enter String: ";
        getline(cin , name);
        cout<<"Enter character to find in string: ";
        cin >> n;
        bool check = false;

        for (int index = 0; name[index] != '\0';index++)
        {
            if (name[index] == n)
            {
                check = true;
            }
        }
        if (check == true)
        {
            cout<<"True";
        }
        else {
            cout<<"False";
        }

}