#include <iostream>
using namespace std;
main() {
    int NoOfBoxes;
    cout<<"Enter how many boxes you want to include: ";
    cin >> NoOfBoxes;
    int length = NoOfBoxes * 3;
    int boxes[length];
    for (int idx = 0; idx < length ; idx++)
    {
        cout<<"Enter value: ";
        cin >> boxes[idx];
    }
    int sum = 0;
    for (int idx = 1; idx < length ;idx = idx + 3)
    {
        sum = sum + boxes[idx-1]*boxes[idx]*boxes[idx+1];
    }
    cout<<sum;
}