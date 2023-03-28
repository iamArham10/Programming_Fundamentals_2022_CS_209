#include <iostream>
using namespace std;
string zodiac(int date,string month);
main() {
    int date;
    string month;
    cout<<"Enter Date: ";
    cin >> date;
    cout<<"Enter Month: ";
    cin >> month;
    string result =  zodiac(date,month);
    cout<<"Your zodiac Sign is: "<< result;
}
string zodiac(int date,string month) {
    string sign;
     if ((month == "march" && date >= 21) || (month == "april" && date <= 19) ) {
        sign = "Aries";

    }
    else if ((month == "april" && date >= 20) || (month == "may" && date <= 20) ) {
        sign = "Taurus";
        
    }
    else if ((month == "may" && date >= 21) || (month == "june" && date <= 20) ) {
        sign = "Gemini";
        
    }
    else if ((month == "august" && date >= 23) || (month == "september" && date <= 22) ) {
        sign = "Virgo";
        
    }
    else if ((month == "june" && date >= 21) || (month == "july" && date <= 22) ) {
        sign = "Cancer";
        
    }
    else if ((month == "july" && date >= 23) || (month == "august" && date <= 22) ) {
        sign = "Leo";
        
    }
    else if ((month == "september" && date >= 23) || (month == "october" && date <= 22) ) {
        sign = "Libra";
        
    }
    else if ((month == "october" && date >= 23) || (month == "november" && date <= 21) ) {
        sign = "Scorpio";
        
    }
    else if ((month == "november" && date >= 22) || (month == "december" && date <= 21) ) {
        sign = "Sagittarius";
    }
    else if ((month == "december" && date >= 22) || (month == "january" && date <= 19) ) {
        sign = "Capricorn";
        
    }   
    else if ((month == "january" && date >= 20) || (month == "february" && date <= 18) ) {
        sign = "Aquarius";
        }
    else if ((month == "february" && date >= 19) || (month == "march" && date <= 20) ) {
        sign = "Pisces";
         }
    return sign;
}