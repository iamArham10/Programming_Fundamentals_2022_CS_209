#include <iostream>
using namespace std;

main() {
    int n;
    cout<<"Enter number: ";
    cin >> n;
    int numbers[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter element number "<<i+1<<" ";
        cin >> numbers[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<"element number: "<<i+1<<" is "<<numbers[i]<<endl;
    }

}