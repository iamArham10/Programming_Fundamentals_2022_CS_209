#include <iostream>
using namespace std;
main() {
    int lenght;
    cout<<"Enter how many words you want to enter: ";
    cin >> lenght;
    string colors[lenght];
    int total_time;
    for (int idx = 0; idx < lenght; idx++)
    {
        cout<<"Enter word: ";
        cin >> colors[idx];
    }
    
    
    for (int idx = 0; idx < lenght; idx++)
    {   total_time = total_time + 2;
        if(idx == 0){
            continue;
        }
        else if (colors[idx] != colors[idx-1]) {
            total_time = total_time + 1;
        }
        
    }
    cout<<"Total Time: "<<total_time;

}