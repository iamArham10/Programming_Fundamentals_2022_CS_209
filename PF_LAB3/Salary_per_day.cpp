#include <iostream>
using namespace std;
main() {
float no_days_month;
float dialy_earning_dollars;
float dollar_exchange_rate;
cout<<"Enter no of days per month ";
cin >> no_days_month;
cout<<"Enter dialy earning in dollars ";
cin >> dialy_earning_dollars;
cout<<"Enter price of 1 Dollar in Rupees ";
cin >> dollar_exchange_rate;
float dialy_salary_rupees = dialy_earning_dollars*dollar_exchange_rate;
float salary_per_month = dialy_salary_rupees * no_days_month;
float salary_per_year = salary_per_month * 12;
float per_year_bonus = (salary_per_year * 2.5)/100;
float annual_salary_wo_tax = salary_per_year + per_year_bonus;
float annual_salary_tax = (annual_salary_wo_tax*25)/100;
float annual_salary = annual_salary_wo_tax - annual_salary_tax;
float salary_per_day = annual_salary/365;
cout<<"Your Salary per day is : '"<<salary_per_day<<"'Rs";
}
 
