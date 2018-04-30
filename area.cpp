/*  Engineer: {user}
    Assignment: Area
    Date: 1-30-18
    Description: Computes and displays the area of a triangle
*/

#include <iostream>
using namespace std;

int main()
{
    double area;
    double base = 3.5;
    double height = 1.45;

    area = 0.5 * base * height;

    cout << "Area: "
         << area
         << "\n";

    return 0;
}
