#include <iostream>
using namespace std;
void patients(int number);
main() {
    int number;
    cout<<"Enter the period for which you want to calculate: ";
    cin >> number;
    patients(number);
}
void patients(int number) {
    int total_patients = 0;
    int sum_patients = 0;
    int sum_untreated_patients = 0;
    int untreated_patients = 0;
    int doctors = 7;
    int treated_patients = 0;
     for (int input = 1 ; input <= number ; input ++){
        cin >> total_patients;
        
        if (input > 1 && input % 2 != 0){
            if ((sum_patients-sum_untreated_patients) < untreated_patients) {
                doctors = doctors + 1;
            }
            
        }
        sum_patients = total_patients + sum_patients;
        if (total_patients > doctors){
            untreated_patients = total_patients - doctors;
            sum_untreated_patients =  untreated_patients + sum_untreated_patients;
        }

        
        }
        treated_patients = sum_patients - sum_untreated_patients;

        cout<<"Total Treated Patients are: "<<treated_patients<<endl;
        cout<<"Total untreated Patients : "<<sum_untreated_patients<<endl;
}