#include <iostream>
using namespace std;
void calculate_Money(float age,float washing_machine_price,float each_toy_price);
main() {
    float age;
    float washing_machine_price;
    float each_toy_price;
    cout<<"Enter lily's Age: ";
    cin >> age;
    cout<<"Enter Washing machine price: ";
    cin >> washing_machine_price;
    cout<<"Enter Price of each toy: ";
    cin >> each_toy_price;
    calculate_Money(age,washing_machine_price,each_toy_price);
}

void calculate_Money(float age,float wmp,float etp) {
    float money;
    float toy ;
    float sum = 0;
    float money_count = 0;
    float toy_count = 0;
    for (int count = 1; count <= age; count++){
        if (count % 2 == 0) {
            money_count = money_count + 1;
            money = money_count * 10;
            sum = sum + money;
        }
        else if (count % 2 !=0) {
            toy_count = toy_count + 1;
        }
    }
    
    toy = toy_count * etp;
    money = sum - money_count;
    float total_money = money + toy;
    cout<<total_money<<endl;
    if (total_money - wmp >= 0) {
        cout<<"Yes!"<<endl;
        cout<<total_money-wmp;
    }
    else if (total_money - wmp < 0) {
        cout<<"No! "<<endl;
        cout<<(total_money - wmp)*-1;
    }
    
    }