#include <iostream>
using namespace std;
main() {
    int numbers[5];
    for (int count = 0; count < 5; count++){
        cout<<"Enter Element number "<<count+1<<" ";
        cin >> numbers[count];
    }
    cout<<"The first element of array is "<<numbers[0]<<endl;
    cout<<"The last element of array is "<<numbers[4]<<endl;

}