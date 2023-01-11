#include <iostream>
using namespace std;
int payment(string Day,string Month,int Amount);
main() {
    string Day,Month;
    int Amount;
    cout<<"Enter Month ";
    cin >> Month;
    cout<<"Enter Day ";
    cin >> Day;
    cout<<"Enter Amount ";
    cin >> Amount;
    int result = payment(Day,Month,Amount);
    cout<<"you have to Pay: "<<result;
}
int payment(string Day,string Month,int Amount) {
    if (Day == "Sunday" && (Month == "Octuber" || Month == "March" || Month == "August")) {
            return (Amount*90)/100;
        }
        
    else if (Day == "Monday" && (Month == "November" || Month == "December")) {
        return (Amount*95)/100;
    }
    else {
        return Amount;
    }
}