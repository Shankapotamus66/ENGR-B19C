/*    Engineer: {user}
Assignment: Lab 6
Date: 2-6-18
Description: Evalutates if grade is a valid input and termintates after 5 invalid inputs.
*/

#include <iostream>
using namespace std;
int main()
{
    int grade;
    int count = 0;
    
    do
    {   
        cout << "Enter a grade (enter 999 to exit): ";
        cin  >> grade;
        if (grade == 999)
            break;
        else if (grade < 0 || grade > 100)
        {
            cout << "An invalid grade was entered.\n";
            count++;
            if (count == 5)            
                break;
        }
        else
        {
            cout << grade << " is a valid grade.\n";
            break;
        }
    }
    while (grade != 999);


    return 0;
}