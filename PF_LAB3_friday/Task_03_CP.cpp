#include <iostream>
using namespace std;
main() {
float initial_velocity;
float time;
float acceleration;
cout<<"Enter initial velocity ";
cin >> initial_velocity;
cout<<"Enter time ";
cin >> time;
cout << "Enter acceleration";
cin >> acceleration;
float final_velocity;
final_velocity = (acceleration*time)+initial_velocity;
cout<<"Final Velocity is :"<<final_velocity;


}