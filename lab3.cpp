/*    Engineer: {user}
Assignment: Lab 3 - Group 5
Date: 2-8-18
Description: This program will allow the user to input a number and the will read the number
    and determine if the number is a greater than 0 and will compute the square root and 
    reciprocal of the number.
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	float num;

	cout << "Please input a number: ";
	cin >> num;

	if (num < 0.0)
        cout << "The number is a negative and cannot be evaluated." << endl;
    else if (num == 0.0)
        cout << "The number is a zero and cannot be evaluated." << endl;
    else
        cout << "The square root of the number is " << sqrt(num) << endl
             << "The reciprocal of the number is " << 1 / num << endl; 

	return 0;
}