#include <iostream>
using namespace std;
void Add(int , int );
main() {
cout<<"using function Add with perimeters 4 and 5"<<endl;
Add (4,5);
cout<<endl;
cout<<"using function Add with perimeters 5 and 22"<<endl;
Add (5,22);
}
void Add (int n_1,int n_2) {
int sum = n_1 + n_2;
cout<<"Your number is "<<sum;

}