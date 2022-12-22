#include <iostream>
using namespace std;
main() {
int Data_in_MB;
cout<<"Enter Data in Megabytes: ";
cin >> Data_in_MB;
int Data_in_bits;
Data_in_bits = Data_in_MB * 1024 * 1024 * 8;
cout<<"Your Data in bits is "<<Data_in_bits<<" bits";
}