/*    Engineer: {user}
Assignment: Right
Date: 2-8-18
Description: This program will input the value of two sides of a right triangle and then
    determine the size of the hypotenuse.
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	float opposite, adjacent;
	float hypotenuse;

	cout << "Please input the value of the two sides" << endl;
	cin >> opposite >> adjacent;

	hypotenuse = sqrt(pow(opposite, 2) + pow(adjacent, 2));

	cout << "The sides of the right triangle are " << opposite << " and " << adjacent << endl;

	cout << fixed << setprecision(2) << "The hypotenuse is " << hypotenuse << endl;

	return 0;
}