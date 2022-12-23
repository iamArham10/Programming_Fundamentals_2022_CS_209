#include <iostream>
using namespace std;
main() {
string Movie_name;
float Adult_ticket_price;
float Child_ticket_price;
float num_of_adult_tickets_sold;
float num_of_child_tickets_sold;
float percentage_donated_charity;
cout<<"Enter movie name: ";
cin >> Movie_name;
cout<<"Enter Adult Ticket Price: ";
cin >> Adult_ticket_price;
cout<<"Enter Child Ticket price: ";
cin >> Child_ticket_price;
cout<<"Number of adult tickets sold: ";
cin >> num_of_adult_tickets_sold;
cout<<"Enter number of child tickets sold: ";
cin >> num_of_child_tickets_sold;
cout<<"Percentage Donated to charity: ";
cin >> percentage_donated_charity;

float total_adult_tickets_price = Adult_ticket_price * num_of_adult_tickets_sold;
float total_child_tickets_price = Child_ticket_price *  num_of_child_tickets_sold;
float total_amount = total_adult_tickets_price + total_child_tickets_price;
float donations = (total_amount * percentage_donated_charity)/100;
float remaining_amount = total_amount - donations;
cout<<"Your Donated "<<donations<<" & your remaining amount is "<<remaining_amount;
}