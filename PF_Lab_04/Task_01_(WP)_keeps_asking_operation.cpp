#include <iostream>
using namespace std;
void add(int, int);
void muliply(int, int);
void division(float, float);
void substraction(int, int);
void operation();

main()
{
  while (true) {operation();}
}



void add(int n_1, int n_2)
{
  int sum = n_1 + n_2;
  cout << "the sum is " << sum;
}
void muliply(int n_1, int n_2)
{  
int mult = n_1*n_2;
cout<<"The product of two numbers is "<<mult;   
}
void division(float n_1, float n_2) 
{
float divs = n_1 / n_2;
cout<<"First number divided by second number equals to "<<divs;
}
void substraction(int n_1,int n_2) 
{
int subs =  n_1 - n_2;
cout<<"Number 1 substracted by Number 2 is "<<subs;
}
void operation()
{
  int num_1, num_2;
  string op;
  cout << "Enter first number: ";
  cin >> num_1;
  cout << "Enter second number: ";
  cin >> num_2;
  cout << "Enter operation to perform with these numbers" << endl;
  cout << "To sum : +" << endl;
  cout << "To Multiply: * " << endl;
  cout << "To divide : / " << endl;
  cout << "To subtract : - " << endl;
  cin >> op;
  if (op == "+")
  {
    add(num_1, num_2);
  }
  
if (op == "-")
  {
    substraction(num_1, num_2);
  }

if (op == "/")
  {
    division(num_1, num_2);
  }

if (op == "*")
  {
    muliply(num_1, num_2);
  }
}