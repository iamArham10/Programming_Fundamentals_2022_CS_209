#include <iostream>
using namespace std;
void state_of_pool(int volume,int flow_rate_p1,int flow_rate_p2,float Absent_Hours);

main() {
	int volume_of_pool,flow_rate_P1,flow_rate_P2;
	float Absent_hours;
	cout<<"Enter volume of Pool: ";
	cin >> volume_of_pool;
	cout<<"Enter Flow rate of Pipe 1: ";
	cin >> flow_rate_P1;
	cout<<"Enter Flow rate of Pipe 2: ";
	cin >> flow_rate_P2;
	cout<<"Enter hours the worker is absent: ";
	cin >> Absent_hours;
	state_of_pool(volume_of_pool,flow_rate_P1,flow_rate_P2,Absent_hours);
	
	
}
void state_of_pool(int volume,int fr_p1,int fr_p2,float Abs_hrs) {
	float flow_p1 = fr_p1*Abs_hrs;
	float flow_p2 = fr_p2*Abs_hrs;
	float volume_filled = flow_p1 + flow_p2;
	float volume_filled_p = (volume_filled/volume)*100;
	float flow_p1_p = (flow_p1/volume_filled)*100;
	float flow_p2_p = (flow_p2/volume_filled)*100;
	if (volume_filled > volume) {
		cout<<"for "<<Abs_hrs<<" Hours Water overflown is "<<volume_filled-volume;
	}
	if (volume_filled < volume) {
		cout<<"The Pool is "<<volume_filled_p<<"% filled in which Pipe one is "<<flow_p1_p<<"% and Pipe two is " <<flow_p2_p<<"%";
	}
}
