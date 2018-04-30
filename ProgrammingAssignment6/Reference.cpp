/*    Engineer: {user}
Assignment: Programming Assignment 6
Date: 4-24-18
Description: This program prompts the user to enter 3 intergers, then uses a function to
        put the three values in ascending order, then uses a function to display the
        lowest value and finally uses a function to display the highest value.
        This program uses pass by reference for the function.
*/
#include <iostream>
using namespace std;

void arrangeValues(int array[], int &size);
void displayLowest(int array[], int &size);
void displayHighest(int array[], int &size);

int main()
{
    const int size = 3;
    int values[size];

    cout << "Enter three integer numbers separated by blanks" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> values[i];
    }
    cout << "-----------------------------------------------" << endl;

    arrangeValues(values, size);
    displayLowest(values, size);
    displayHighest(values, size);

	return 0;
}

//	************************************************************************
//  arrangeValues
//
//	task:	  This function arranges the values in ascending order
//
//	data in:  array[], &size
//	data out: array[], values in ascending order
//
//	************************************************************************

void arrangeValues(int array[], int &size)
{
    int temp;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] > array[j]) 
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }  
        }
    }

    cout << "Ordered : ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

//	************************************************************************
//  displayLowest
//
//	task:	  This function displays the lowest value inputed.
//
//	data in:  array[], &size
//	data out: lowest, displays the lowest value
//
//	************************************************************************

void displayLowest(int array[], int &size)
{
    int lowest = array[0];

	for (int i = 0; i < size; i++)
	{
		if (array[i] < lowest)
			lowest = array[i];
	}

	cout << "Lowest  : " << lowest << endl;
}

//	************************************************************************
//  displayHighest
//
//	task:	  This function displays the highest value inputed.
//
//	data in:  array[], &size
//	data out: highest, displays the highest value
//
//	************************************************************************

void displayHighest(int array[], int &size)
{
    int highest = array[0];

	for (int i = 0; i < size; i++)
	{
		if (array[i] > highest)
			highest = array[i];
	}
	
    cout << "Highest : " << highest << endl;
}