#include <iostream>
#include <cmath>
using namespace std;
int firm_project(float needed_hours,float n_of_days,float n_of_workers);
main() {
    float needed_hours,n_of_days,n_of_workers;
    cout<<"Enter Hours of work you need ";
    cin >> needed_hours;
    cout<<"Enter Number of days you have ";
    cin >> n_of_days;
    cout<<"Enter Number of workers you have ";
    cin >> n_of_workers;

if (firm_project(needed_hours,n_of_days,n_of_workers) < 0) {
    int result = firm_project(needed_hours,n_of_days,n_of_workers)*(-1);
    cout<<"Not enought time you need "<<result<<" Hours";
}
if (firm_project(needed_hours,n_of_days,n_of_workers) >= 0) {
    cout<<"Yes "<<firm_project(needed_hours,n_of_days,n_of_workers)<<" Hours left!";
}

}


int firm_project(float needed_hours,float n_of_days,float n_of_workers) {
    float working_days = (n_of_days*90)/100;
    float working_hours = working_days*10;
    float total_working_hours = working_hours*n_of_workers;
    int result = total_working_hours-needed_hours;
    return result;


}

