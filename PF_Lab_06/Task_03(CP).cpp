#include <iostream>
using namespace std;
string checkspeed(float number);
main(){
    int speed;
    cout<<"Enter Your speed ";
    cin >> speed;
    string evaluate = checkspeed(speed);
    cout<<evaluate;
}
string checkspeed(float speed) {
    if (speed <= 10) {
        return "slow";
    }
    else if (speed <= 50) {
        return "average";
    }
    else if(speed <= 150) {
        return "fast";
    }
    else if(speed <= 1000) {
        return "ultra fast";
    }
    else {
        return "extremely fast";
    }
}