/*    Engineer: {user}
Assignment: Lab 9
Date: 3-6-18
Description: This program uses hours, pay rate, state tax and fed tax to determine gross
        and net pay.

Homework Assignment 6
1.  seekg
2.  fstream
3.  seekp
4.  app
5.  binary
6.  seekp
7.  write
8.  skips
9.  peek
10. get, peek

*/

#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Fill in the code to define payfile as an input file
    ifstream payfile;
	ofstream outfile;

	float gross;
	float net;
	float hours;
	float payRate;
	float stateTax;
	float fedTax;

	cout << fixed << setprecision(2) << showpoint;

	// Fill in the code to open payfile and attach it to the physical file
    payfile.open("payroll.dat");
	outfile.open("pay.out");

	// Fill in code to write a conditional statement to check if payfile
	// does not exist.
    if (!payfile)
	{
		cout << "Error opening file. \n";
		cout << "It may not exist where indicated" << endl;
		return 1;
	}

	outfile << fixed << setprecision(2);
	outfile << "Payrate        Hours     Gross Pay    Net Pay"
	     	<< endl << endl;
	cout << fixed << setw(15)
		 << "Payrate        Hours     Gross Pay    Net Pay"
	     << endl << endl;

	// Fill in code to prime the read for the payfile file.
    payfile >> hours;

	// Fill in code to write a loop condition to run while payfile has more
	// data to process.
    while (payfile)
	{
		payfile >> payRate >> stateTax >> fedTax;

		gross = payRate * hours;

		net = gross - (gross * stateTax) - (gross * fedTax);

		outfile << payRate << setw(15) << hours << setw(12) << gross
			    << setw(12) << net << endl;
		cout << payRate << setw(15) << hours << setw(12) << gross
			 << setw(12) << net << endl;

		payfile >> hours;  // Fill in the code to finish this with the appropriate
			                      // variable to be input
	}

	payfile.close();
	outfile.close();

	return 0;
}