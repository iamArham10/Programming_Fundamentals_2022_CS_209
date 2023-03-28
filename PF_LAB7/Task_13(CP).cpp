#include <iostream>
using namespace std;
void printPercentage(int number);
main(){
    system("cls");
    int integer;
    cout<<"Enter Number of times you want to enter a number: ";
    cin >> integer;
    printPercentage(integer);

}
void printPercentage(int integer) {
    float p1 = 0;
    float p2 = 0;
    float p3 = 0;
    float p4 = 0;
    float p5 = 0;
    
    for (int count = 1;count<=integer;count++){
        int number;
        cout<<"Enter your number: ";
        cin >> number;
        if (number < 200) {
            p1 = p1 + 1;
        }
        else if (number >= 200 && number <= 399){
            p2 = p2 + 1;
        } 
        else if (number >= 400 && number <= 599){
            p3 = p3 + 1;
        } 
        else if (number >= 600 && number <= 799){
            p4 = p4 + 1;
        } 
        else if (number > 800) {
            p5 = p5 + 1;
        }
        }
        float p1_percentage = (p1/(p1+p2+p3+p4+p5))*100.0;
        float p2_percentage = (p2/(p1+p2+p3+p4+p5))*100.0;
        float p3_percentage = (p3/(p1+p2+p3+p4+p5))*100.0;
        float p4_percentage = (p4/(p1+p2+p3+p4+p5))*100.0;
        float p5_percentage = (p5/(p1+p2+p3+p4+p5))*100.0;
        cout<<p1_percentage<<endl;
        cout<<p2_percentage<<endl;
        cout<<p3_percentage<<endl;
        cout<<p4_percentage<<endl;
        cout<<p5_percentage<<endl;
}