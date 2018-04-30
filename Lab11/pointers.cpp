/*    Engineer: {user}
Assignment: Lab 11 - 9.1
Date: 4-17-18
Description: This program finds the area of a rectangle using pointers to pass the values.

Pre-Lab
1. *
2. &
3. initialization list
4. new
5. delete
6. reference
7. an address
8. 3.75
9. an address
10 3.75

Exercise 2:
The area is 150
The width is greater than the length
*/

#include <iostream>
using namespace std;

int main()
{

	int length;	// holds length 
	int width;	// holds width 
	int area;	// holds area

	int *lengthPtr = nullptr;	// int pointer which will be set to point to length 
	int *widthPtr = nullptr;	// int pointer which will be set to point to width

	cout << "Please input the length of the rectangle" << endl;
	cin >> length;

	cout << "Please input the width of the rectangle" << endl;
	cin >> width;

    lengthPtr = &length;
    widthPtr = &width;

	area =	*lengthPtr * *widthPtr;

	cout << "The area is " << area << endl;

	if (*lengthPtr > *widthPtr) 
		cout << "The length is greater than the width" << endl;

	else if (*widthPtr > *lengthPtr)
		cout << "The width is greater than the length" << endl;

	else
		cout << "The width and length are the same" << endl;

	return 0;
}