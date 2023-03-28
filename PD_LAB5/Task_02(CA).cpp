#include <iostream>
#include <cmath>
using namespace std;
float pyramid(float lenght,float width,float height,string unit);
main()
{
    float lenght,width,height;
    string unit;
    cout<<"Enter lenght of the pyramid: ";
    cin >> lenght;
    cout<<"Enter width of the pyramid: ";
    cin >> width;
    cout<<"Enter the height of the pyramid: ";
    cin >> height;
    cout<<"Enter Unit of the Area of Pyramid : ";
    cin >> unit;
    float result = pyramid(lenght,width,height,unit);
    cout<<"The Area of the pyramid is : "<<result<<" "<< unit;

}


float pyramid(float lenght,float width,float height,string unit) {
    float volume = (lenght*width*height)/3;
    if (unit == "centimeters") {return volume*pow(100,3);}
    if (unit == "kilometers") {return volume*pow(10,-9);}
    if (unit == "milimeters") {return volume*pow(10,9);}
    return 0;
}


