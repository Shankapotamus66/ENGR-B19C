/*    Engineer: {user}
Assignment: Lab 9
Date: 3-6-18
Description: This program reads a file called proverb.txt and will allow a user to input an offset
		and tell the user the letter at the byte.

Exericse 2 - It was another r because the offset entered was out of range and there were no other 
		characters to be displayed so ch stayed the same character.
Exericse 3 - The user has to insert negative integers for the offset to be changed.
*/

#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main()
{
	fstream inFile("proverb.txt", ios::in);
	long offset;
	char ch;
	char more;

	do
	{
		// Fill in the code to write to the screen
		// the current read position (with label)
        cout << "The read position is currently at byte " << inFile.tellg() << endl;

		cout << "Enter an offset from the current read position: ";
		cin >> offset;

		//	Fill in the code to move the read position offset bytes
		//	from the CURRENT read position.


		//	Fill in the code to get one byte of information from the file
		//	and place it in the variable "ch".
        inFile.seekg(offset, ios::end);

        inFile.get(ch);

		cout << "The character read is " << ch << endl;
		cout << "If you would like to input another offset enter a Y"
			 << endl;
		cin >> more;

		// Fill in the code to clear the eof flag.
        inFile.clear();

	} while (toupper(more) == 'Y');

	inFile.close();

	return 0;
}