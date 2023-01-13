#include <iostream>
using namespace std;
void second_line(int esh,int esm,int sah,int sam);
main() {
    int exam_startin_hour,exam_starting_minute,student_arrival_hour,student_arrival_minute;
    cout<<"Enter exam starting hour: ";
    cin >> exam_startin_hour;
    cout<<"Enter exam starting minutes: ";
    cin >> exam_starting_minute;
    cout<<"Enter student arrival hour: ";
    cin >> student_arrival_hour;
    cout<<"Enter Student arrival minutes: ";
    cin >> student_arrival_minute;
    
    second_line(exam_startin_hour,exam_starting_minute,student_arrival_hour,student_arrival_minute);
}


void second_line(int esh,int esm,int sah,int sam) {
    int exam_total_minutes = (esh*60)+esm;
    int student_total_minutes = (sah*60)+sam;
    int total = exam_total_minutes-student_total_minutes;
    string line_one;
    if (total < 0) {
        line_one = "Late";
        cout<<line_one<<endl;
    }
    else if (total >= 0 && total <= 30) {
        line_one = "On time";
        cout<<line_one<<endl;
    }
    else if (total > 30) {
        line_one = "Early";
        cout<<line_one<<endl;
    }
    if (total < 0) {
        total = total*-1;
    }
    int hour = total/60;
    int minutes = total%60; 
    if (hour == 0 && minutes<60) {
        if (line_one == "Early") {
            if (minutes <= 9) {
                cout<<"0"<<minutes<<" minutes before the start";
            }
            else if (minutes > 9) {
                cout<<minutes<<" minutes before the start";
            }
        }
        else if (line_one == "On time") {
            if (minutes == 0){
                cout<<"";
            }
            else if (minutes <= 30 && minutes > 0) {
                cout<<minutes<<" minute before start";
            }
        }
        else if (line_one == "Late") {
            if (minutes <= 9) {
                cout<<"0"<<minutes<<" minutes after the start";
            }
            else if (minutes > 9) {
                cout<<minutes<<" minutes after the start";
            }
        }

    }
    else if (hour >= 1) {
        if (line_one =="Late") {
            if (minutes <=9){
                cout<<hour<<":"<<"0"<<minutes<<" hours after the start";
            }
            if (minutes > 9) {
                cout<<hour<<":"<<minutes<<" hours after the start";
            }
        }
        else if (line_one == "Early") {
            if (minutes <=9){
                cout<<hour<<":"<<"0"<<minutes<<" hours before the start";
            }
            if (minutes > 9) {
                cout<<hour<<":"<<minutes<<" hours before the start";
            }
        }

    }
}
