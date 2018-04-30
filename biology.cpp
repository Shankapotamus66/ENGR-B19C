/*    Engineer: {user}
Assignment: Biology
Date: 2-6-18
Description: This program prompts the user for a value of time and computes the number of 
    of bacteria in a culuture at that given time.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double bacteria;
    int time;

    cout << "Enter a time? ";
    cin >> time;
    bacteria = (300000 * exp( time * -0.032 ));
    cout << "Bacteria " << bacteria << endl;

    return 0;
}