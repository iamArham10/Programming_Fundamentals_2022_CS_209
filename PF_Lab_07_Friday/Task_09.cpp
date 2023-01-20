#include <iostream>
using namespace std;
main() {
    int num;
    cout<<"Enter Your number";
    cin >> num;
    for (int count = 1;count <= num ; count++){

        for (int asteric = 1; asteric <= count*2; asteric++){
            cout<<"*";
        }
        
        

        
        for (int asteric = 1; asteric <= count*2; asteric++){
            cout<<"*";
        }
        cout<<endl;
    }
}