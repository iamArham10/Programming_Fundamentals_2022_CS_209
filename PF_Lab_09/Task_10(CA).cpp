#include <iostream>
using namespace std;
int count(string name);
void reverse(string name);
main() {
    string name;
    cout<<"Enter your string: ";
    getline(cin, name);
    reverse(name);

}
int count(string name) {
    int c = 0;
    for (int i = 0; name[i] != '\0'; i++){
        c = c + 1;
    }
    return c;
}
void reverse(string name) {
    for (int n = count(name) - 1; n >= 0; n--) {
        cout<<name[n];
    }
}
