#include <iostream>
using namespace std;
string activity(string temperature,string humidity);
main() {
    string temperature,humidity;
    cout<<"Enter temperature warm or cold: ";
    cin >> temperature;
    cout<<"Enter humidity: ";
    cin >> humidity;
    string result = activity(temperature,humidity);
    cout<<result;
}
string activity(string temperature,string humidity) {
    string result;
    if (temperature == "warm") {
        if (humidity == "dry") {
            result = "Play Tennis";
        }
        if (humidity == "humid") {
            result = "swim";
        }
    }
    if (temperature == "cold") {
        if (humidity == "dry") {
            result = "Play basketball: ";
        }
        if (humidity == "humid") {
            result = "Watch Tv";
        }
    }
    return result;
}
