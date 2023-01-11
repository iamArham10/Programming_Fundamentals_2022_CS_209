#include <iostream>
using namespace std;
float volleyball(string year,float holidays,float weekends);

main() {
    string leap_or_not;
    float holidays;
    float weekends; 
    cout<<"Enter if this year is Leap or not";
    cin >> leap_or_not;
    cout<<"Enter Number of holidays: ";
    cin >> holidays;
    cout <<"Enter Weekends: ";
    cin >> weekends;
     
    cout<<"The number of times Vladmir has played volleyball is "<<volleyball(leap_or_not,holidays,weekends);
}

float volleyball(string year,float holidays,float weekends) {
    float first_part = (3/4)*48;
    float second_part = holidays*(2/3);
    float total = first_part+second_part;
    float answer;
    if (year == "normal") {
        answer = total;
    }
    if (year == "leap") {
       answer = (total*115)/100;
    }
    return answer;
}