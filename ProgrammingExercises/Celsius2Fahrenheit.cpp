/*    Engineer: {user}
Assignment: Celsius2Fahrenheit
Date: 2-8-18
Description: This program prompts the user for the temperature in Celsius and will compute the Fahrenheit temperature.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double fahrenheit;
    double celsius;

    cout << "Enter the temperature in Celsius: ";
    cin >> celsius;
    fahrenheit = (9.0/5.0) * celsius + 32.0;
    cout << "The temperature in Faherenheit: " << fahrenheit << endl;

    return 0;
}