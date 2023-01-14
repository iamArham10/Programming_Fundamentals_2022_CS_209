#include <iostream>
using namespace std;
string position(int h, int x, int y);
main()
{
    int h, x, y;
    cout << "Enter Integer h: ";
    cin >> h;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;
    string result = position(h, x, y);
    cout << result;
}
string position(int h, int x, int y)
{   if ((x == 0 && y == 0))
        {
            return "border";
        }

    else if ((x >= 0 && y >= 0) && (x <= (2 * h) && y <= (4 * h)))
    {   
        if (x < h && y > h)
        {
            return "outside";
        }
        else if (x > (2 * h) && y > (2 * h))
        {
            return "outside";
        }
        else if (h%x == 0 && h%y == 0) {
            return "border";
        }
        else
        {
            return "inside";
        }
        
    }
    else if (x < (3 * h) && y > (4 * h))
    {
        return "outside";
    }
    else {
        return "border";
    }
}
