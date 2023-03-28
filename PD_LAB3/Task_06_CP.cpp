#include <iostream>
using namespace std;
main() {
float size_of_bag;
float cost_of_bag;
float area_in_sqf;
cout<<"Enter Size of fertilizer bag: ";
cin >> size_of_bag;
cout<<"Cost of bag: ";
cin >> cost_of_bag;
cout<<"Enter Area in square feet: ";
cin >> area_in_sqf;
float c_o_fertil_pr_pnd = cost_of_bag / size_of_bag;
float cost_of_fer_area = cost_of_bag / area_in_sqf;
cout<<"Cost of the fertilizer per pound : "<< c_o_fertil_pr_pnd<<endl;
cout<<"Cost of fertilizing the area per square feet: "<<cost_of_fer_area;


}