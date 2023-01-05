#include <iostream>
using namespace std;
void time_after_15_minutes(int hour, int minutes);
main() {
	int hour,minutes;
	cout<<"Enter Hours";
	cin >> hour;
	cout<<"Enter Minutes";
	cin >> minutes;
	time_after_15_minutes(hour,minutes);
	
}

void time_after_15_minutes(int hour, int minutes) {
	int total_time_minutes = (hour*60)+minutes;
	int total_time_addminutes = total_time_minutes + 15;
	if (total_time_addminutes > 1440) {
		total_time_addminutes = total_time_addminutes - 1440;
	}
	int hourz = total_time_addminutes / 60;
	int minutesz = total_time_addminutes % 60;
	cout<<"The time is "<<hourz<<" : "<<minutesz; 
	
	
}

