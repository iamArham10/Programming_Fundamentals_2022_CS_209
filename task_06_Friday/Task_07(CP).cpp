#include <iostream>
using namespace std;
int ontime(float s_hour, float s_minutes, float t_hour, float t_minutes);
main()
{
    float student_hour, student_minutes, test_hour, test_minutes;
    cout << "Enter starting time of test(hour): ";
    cin >> test_hour;
    cout << "Enter starting time of test(minutes): ";
    cin >> test_minutes;
    cout << "Enter hour of arrival: ";
    cin >> student_hour;
    cout << "Enter minutes of arrival; ";
    cin >> student_minutes;
    int result = ontime(student_hour, student_minutes, test_hour, test_minutes);
    int real_result;
    if (result < 0)
    {
        int real_result = result * -1;
    }
    if (result > 0) {
        int real_result = result;
    }
    int minutes = real_result % 60;
    int hour = real_result / 60;
    if (result < 0)
    {
        if (hour = 0)
        {
            cout << "You are late" << minutes;
        }
        else 
        {
            cout << "You are Late " << hour << ":" << minutes;
        }
    }
    else if (result > 0)
    {
        if (hour = 0)
        {
            cout << "You are on time" << minutes;
        }
        else
        {
            cout << "You are on time " << hour << ":" << minutes;
        }
    }
}

int ontime(float s_hour, float s_minutes, float t_hour, float t_minutes)
{
    float s_total_minutes = (s_hour*60) + s_minutes;
    float t_total_minutes = (t_hour*60) + t_minutes;
    float total_minutes = t_total_minutes - s_total_minutes;
    return total_minutes;
}
