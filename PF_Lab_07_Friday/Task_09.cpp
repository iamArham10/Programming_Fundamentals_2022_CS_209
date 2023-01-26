#include <iostream>
using namespace std;
main() {
    int num;
    cout<<"Enter Your number: ";
    cin >> num;
    for (int count = 1;count <= (num) ; count++){

        for (int asterick = 1; asterick <= count ; asterick++){
			cout<<"*";
		}
        
		for (int space = (num*2)-1;space >= count*2;space--) {
		cout<<" ";}
		
		for (int asterick = 1; asterick <= count ; asterick++){
			cout<<"*";
		}
		cout<<endl;
    }
}