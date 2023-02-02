// returns true if last element is same as given character
#include <iostream>
using namespace std;
bool last(string ,char);
int count(string);
main() {
    string name;
    char c;
    cout<<"Enter String: ";
    getline(cin, name);
    cout<<"Enter character: ";
    cin >> c;
    if (last(name,c)) {
        cout<<"True";
    }
    else {
        cout<<"False";
    }

}
int count(string name) {
    int c = 0;
    for (int i = 0; name[i] != '\0'; i++){
        c = c + 1;
    }
    return c-1;
}
bool last(string name , char c) {
    if (name[count(name)] == c) {
        return true;
    }
    return false;
}
