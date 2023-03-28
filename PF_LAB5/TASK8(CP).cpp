#include<iostream>
#include<cmath>
using namespace std;

main()
{
  float angle ,base ,result ,radian;
  
  cout<<"Enter base length : ";
  cin >> base;

  cout<<"Enter Angle of Elevation in Degrees: ";
  cin >> angle;
  
  radian=angle/57.2958;

  result=tan(radian)*base;

  cout <<"Height of the tree is  : " << result ;

}