/*    Engineer: {user}
Assignment: Programming Assignment 3
Date: 2-27-18
Description: This program computes the volume of a cylinder from values inputed by the user, uses a function to 
    do the computations of the cylinder.
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double cylvol(double, double);

int main()
{
    double radius;
    double length;
    double cylinder;

    cout << "Calculate the volume of a cylinder." << endl;
    cout << "Enter radius: ";
    cin  >> radius;
    cout << "Enter length: ";
    cin >> length;

    cylinder = cylvol(radius, length);
    cout << "The volume of the cylinder with radius " << radius << " and length " << length << " is "
         << cylinder << endl;

    return 0;
}

double cylvol(double radius, double length)
{
    double volume;

    volume = 3.1415 * pow(radius, 2) * length;

    return volume;
}