#include <iostream>
using namespace std;
void add(int, int);
void operation();
main()
{
  operation();
}

void add(int n_1, int n_2)
{
  int sum = n_1 + n_2;
  cout << "the sum is " << sum;
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
}