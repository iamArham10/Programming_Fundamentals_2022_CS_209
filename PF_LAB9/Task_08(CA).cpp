#include <iostream>
using namespace std;
main() {
    string word;
    cout<<"Enter string: ";
    getline(cin , word);
    for (int location = 0; word[location] != '\0';location++)
    {
        cout<<"Element at location "<<location + 1<<" is "<<word[location]<<endl;
    }
}