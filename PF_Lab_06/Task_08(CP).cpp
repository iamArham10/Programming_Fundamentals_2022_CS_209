#include <iostream>
using namespace std;
int volleyball(string year,float holidays,float weekends);

main() {
    string leap_or_not;
    float holidays;
    float weekends; 
    cout<<"Enter if this year is Leap or not: ";
    cin >> leap_or_not;
    cout<<"Enter Number of holidays: ";
    cin >> holidays;
    cout <<"Enter Weekends: ";
    cin >> weekends;
     
    cout<<volleyball(leap_or_not,holidays,weekends);
}

int volleyball(string year,float holidays,float weekends) {
    float total = (3.0/4.0)*48.0+holidays*(2.0/3.0);
    float answer;
    if (year == "normal") {
        answer = total;
    }
    if (year == "leap") {
       answer = (total*115.0)/100.0;
    }
   return answer;
}