#include<iostream>
#include<cmath>
using namespace std;
main()
{
  float a,b,c,root1,root2,disc;

  cout<<"ENTER value of a : ";
  cin >>a;
  cout<<"ENTER value of b : ";
  cin >>b;
  cout<<"ENTER value of c : ";
  cin >>c;
  disc=(b*b)-(4*a*c);
  root1=((-b)+sqrt(disc))/(2*a);
  cout<<"FIRST ROOT IS : " << root1<<endl;
  root2=((-b)-sqrt(disc))/(2*a);
  cout<<"SECOND ROOT IS : " << root2;

}