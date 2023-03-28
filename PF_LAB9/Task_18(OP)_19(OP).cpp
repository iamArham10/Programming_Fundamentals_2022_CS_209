/*Write a program that takes n numbers from the user and stores them in an array and prints
the smallest number entered by the user.*/
/*Write a program that takes n numbers from the user and stores them in an array and prints
the largest number entered by the user.*/
#include <iostream>
using namespace std;
int smallest_number(int numbers[],int lenght);
int largest_number(int numbers[],int lenght);
main() {
    int lenght;
    cout<<"Enter how many numbers you want to enter: ";
    cin >> lenght;
    int numbers[lenght];
    for (int id = 0;id < lenght;id++)
    {
        cout<<"Enter number: ";
        cin >> numbers[id];
    }
    cout<<"The smallest number is "<<smallest_number(numbers, lenght);
    cout<<endl;
    cout<<"The largest number is "<<largest_number(numbers,lenght);
    
}
int smallest_number(int numbers[],int lenght) {
    int smallest_number = numbers[0];
    for (int id = 0;id < lenght; id++)
    {
        if (numbers[id] < smallest_number)
        {
            smallest_number = numbers[id];
        }
        
    }
    return smallest_number;
    

}

int largest_number(int numbers[],int lenght) {
    int largest_number = numbers[0];
    for (int id = 0;id < lenght; id++)
    {
        if (numbers[id] > largest_number)
        {
            largest_number = numbers[id];
        }
        
    }
    return largest_number;
    

}
