#include <iostream>
#include <cmath>
using namespace std;
void english(int number);
main() {
    int number;
    cout<<"Enter your number : ";
    cin >> number;
    english(number);
}
void english(int number) {
    string a = "One";
    string b = "two";
    string c = "three";
    string d = "four";
    string e = "five";
    string f = "six";
    string g = "seven";
    string h = "eight";
    string i = "nine";
    string j = "twenty";
    string k = "thirty";
    string l = "fourty";
    string m = "fifty";
    string n = "sixty";
    string o = "seventy";
    string p = "eighty";
    string q = "ninty";
    string first = "";
    string second = "";
    int first_digit = number/10;
    int second_digit = number%10;
    if (first_digit == 2) {cout<<"Your number is "<< j<<" ";}
    if (first_digit == 3) {cout<<"Your number is "<< k<<" ";}
    if (first_digit == 4) {cout<<"Your number is "<< l<<" ";}
    if (first_digit == 5) {cout<<"Your number is "<< m<<" ";}
    if (first_digit == 6) {cout<<"Your number is "<< n<<" ";}
    if (first_digit == 7) {cout<<"Your number is "<< o<<" ";}
    if (first_digit == 8) {cout<<"Your number is "<<p<<" ";}
    if (first_digit == 9) {cout<<"Your number is "<<q<<" ";}
    if (second_digit == 1) {cout<<a;}
    if (second_digit == 2) {cout<<b;}
    if (second_digit == 3) {cout<<c;}
    if (second_digit == 4) {cout<<d;}
    if (second_digit == 5) {cout<<e;}
    if (second_digit == 6) {cout<<f;}
    if (second_digit == 7) {cout<<g;}
    if (second_digit == 8) {cout<<h;}
    if (second_digit == 9) {cout<<i;}
    
    
    
    


}
