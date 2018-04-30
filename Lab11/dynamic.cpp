/*    Engineer: {user}
Assignment: Lab 11 - 9.1
Date: 4-17-18
Description: This program takes the input of a last name of exactly 10 characters and will store 
        the name in an array using pointers and then will output the last name using pointers.
        Then will input 3 integers using pointers add them using their pointers and prints the
        sum of the three integers.

Exercise 2:
Using the bracketed subscript was not necessary becuase we are using pointers, using name[pos] 
    for inputing and outputting would give the same results.
*/

#include <iostream>
using namespace std;

const int MAXNAME = 10;

int main()
{
	int pos;
	char *name = nullptr;
	int *one = nullptr;
	int *two = nullptr;
	int *three = nullptr;
	int result;

    one = new int;
    two = new int;
    three = new int;
    name = new char;

	cout << "Enter your last name with exactly 10 characters." << endl;
	cout << "If your name has < 10 characters, repeat last letter. " << endl
		 << "Blanks at the end do not count." << endl;

	for (pos = 0; pos < MAXNAME; pos++)
	//	cin >>	*(name + pos);
        cin >>	name[pos];

	cout << "Hi ";

	for (pos = 0; pos < MAXNAME; pos++)
	//	cout << *(name + pos);
        cout <<	name[pos];

	cout << endl << "Enter three integer numbers separated by blanks" << endl;

	// Fill in code to input three numbers and store them in the
	// dynamic variables pointed to by pointers one, two, and three.
	// You are working only with pointer variables
    cin >> *one
        >> *two
        >> *three;

	cout << "The three numbers are " << endl;
    cout << *one << endl
         << *two << endl
         << *three << endl;

	result = *one + *two + *three;

	cout << "The sum of the three values is " << result << endl;

    delete one;
    delete two;
    delete three;
    delete name;

	return 0;
}