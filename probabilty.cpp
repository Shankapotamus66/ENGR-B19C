/*    Engineer: {user}
Assignment: Programming Assignment 3
Date: 2-27-18
Description: 
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    const int MINUTE_INCREMENT = 1;
    float averageCall = 2;
    int minute = 1;
    float probability;

    cout << "Min.   Prob." << endl
         << "------------" << endl;
        
    cout << setiosflags(ios::showpoint)
         << setprecision(4);

    while (minute <= 10)
    {
        probability = 1 - exp(-minute / averageCall);

        cout << setw(2)  << minute << fixed
             << setw(10) << probability << endl;

        minute = minute + MINUTE_INCREMENT;
    }
    return 0;
}