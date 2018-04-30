/*    Engineer: {user}
Assignment: Programming Assignment 6
Date: 4-24-18
Description: This program prompts the user to enter 3 intergers, then uses a function to
        put the three values in ascending order, then uses a function to display the
        lowest value and finally uses a function to display the highest value.
        This program uses pass by reference for the function.
*/

#include <iostream>
#include <iomanip>
using namespace std;

void arrangeValues(int &one, int &two, int &three);
void displayLowest(int &one);
void displayHighest( int &three);

int main()
{
    int one;
	int two;
	int three;

    cout << "Enter three integer numbers separated by blanks" << endl;
    cin >> one
        >> two
        >> three;
    cout << "-----------------------------------------------" << endl;

    arrangeValues(one, two, three);
    displayLowest(one);
    displayHighest(three);

	return 0;

}

//	************************************************************************
//  arrangeValues
//
//	task:	  This function arranges the values in ascending order
//
//	data in:  &one, &two, &three
//	data out: one, two, three in ascending order.
//
//	************************************************************************

void arrangeValues(int &one, int &two, int &three)
{
    int temp;

    if (one > two) 
    {
        temp = one;
        one = two;
        two = temp;
    }
    if (two > three) 
    {
        temp = two;
        two = three;
        three = temp;
    }
    if (one > two) 
    {
        temp = one;
        one = two;
        two = temp;
    }
    
    //cout << "Ordered : " << one << " " << two << " " << three << endl;
}

//	************************************************************************
//  displayLowest
//
//	task:	  This function displays the lowest value inputed.
//
//	data in:  &one
//	data out: &one, is the lowest value
//
//	************************************************************************

void displayLowest(int &one) // &one is the lowest value after being sorted
{
    cout << "Lowest  : " << one << endl;
}

//	************************************************************************
//  displayHighest
//
//	task:	  This function displays the highest value inputed.
//
//	data in:  &three
//	data out: three, is the highest value
//
//	************************************************************************

void displayHighest( int &three) // &three is the highest value after being sorted
{
    cout << "Highest : " << three << endl;
}
