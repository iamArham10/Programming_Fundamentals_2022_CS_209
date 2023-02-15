#include <iostream>
using namespace std;
int numbers[50];
bool isRepeating(int cycle);
int count();
main()
{   
    int length;
    cout<<"Array Length: ";
    cin >> length;
    for (int idx = 0; idx < length; idx++)
    {
        cout<<"Enter number: ";
        cin >> numbers[idx];
    }
    int cycle;
    cout<<"Enter cycle: ";
    cin >> cycle;

    bool result = isRepeating(cycle);
    if (result){
        cout<<"True";
    }
    if (!result)
    {
        cout<<"False";
    }
}

bool isRepeating(int cycle) {
    int length = count();
    bool repeat;

    if (cycle > count())
    {
        return true;
    }

    for(int idx = 0;idx < length ; idx++)
    {
        if(numbers[idx] == numbers[idx+cycle])
        {
            if(idx+cycle == length - 1)
            {
                return true;
                
            }
            repeat = true;
            continue;
        }
        else {
           return false;
        }

    }
    return repeat;

}


int count()
{   int count = 0;
    for (int idx = 0; numbers[idx] != '\0';idx++)
    {
        count = count + 1;
    }
    return count;
}
