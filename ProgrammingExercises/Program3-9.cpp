/*    Engineer: {user}
Assignment: program 3.4
Date: 2-6-18
Description: Count
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int height;
    double time;

    height = 800;
    time = sqrt(2 * height / GRAV);
    cout << "It will take " << time << " seconds to fall "
         << height << " feet.\n";
         
    return 0;
}