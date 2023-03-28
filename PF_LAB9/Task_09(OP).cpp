#include <iostream>
using namespace std;
bool lenght(string name);
main() {
    string name;
    cout<<"Enter string: ";
    getline(cin, name);
    if (lenght(name))
    {
        cout<<"True";
    }
    else {
        cout<<"False";
    }
}
bool lenght(string name)
{
    int count = 0;
    for (int n = 0; name[n] != '\0';n++)
    {
        count = count + 1;
    }
    if (count%2 == 0)
    {
        return true;
    }
    return false;
}