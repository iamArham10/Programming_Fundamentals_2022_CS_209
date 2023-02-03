#include <iostream>
using namespace std;
main() {
    string movies[5] = {"Gladiators","StarWars","Terminator","TakingLives","TombRider"};
    string movie_name;
    cout<<"Enter movie name: ";
    cin >> movie_name;
    float movie_price;
    for (int idx = 0; idx < 5; idx++)
    {
        if (movies[idx] == movie_name)
        {
            if (idx % 2 == 0)
            {
                movie_price = (500*(95))/100;
                break;
            }
            else {
                movie_price = (500*(90)/100);
                break;
            }
        }
    }
    cout<<"Total Price is : "<<movie_price<<"Rs";
    return 0;
}