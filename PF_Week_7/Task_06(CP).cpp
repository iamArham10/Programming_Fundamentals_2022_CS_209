#include <iostream>
using namespace std;
int FrequencyChecker(int number,int freq);
main(){
    int number,freq;
    cout<<"Enter Your number ";
    cin >> number;
    cout<<"Enter digit which frequency you want to check: ";
    cin >> freq;
    int result = FrequencyChecker(number,freq);
    cout<<result;
}
int FrequencyChecker(int number,int freq) {
    int fre;
    int count = 0;
    while (number / 10 > 0) {
        fre = number%10;
        number = number / 10;
        if (fre == freq) {
            count = count + 1;
        }
        
    }
    return count;

}