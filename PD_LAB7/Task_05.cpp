#include <iostream>
using namespace std;
int triangle(int number);
main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;
    int result = triangle(number);
    cout << result;
}
int triangle(int number)
{
    int sum = 0;
    for (int count = 1; count <= number; count++)
    {
        sum = sum + count;
    }
    return sum;
}
