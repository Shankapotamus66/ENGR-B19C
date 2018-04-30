/*    Engineer: {user}
Assignment: Programming Assignment 3
Date: 3-1-18
Description: This program will input American money and convert it to foreign currency
*/

#include <iostream>
#include <iomanip>
using namespace std;

// This program will input American money and convert it to foreign currency

// Prototypes of the functions
void convertMulti(float dollars, float& euros, float& pesos);
void convertMulti(float dollars, float& euros, float& pesos, float& yen);
float convertToYen(float dollars);
float convertToEuros(float dollars);
float convertToPesos(float dollars);

const float EURO_EXCHANGE = 1.06;
const float PESO_EXCHANGE = 9.73;
const float YEN_EXCHANGE = 124.35;

int main()
{
	float dollars;
	float euros;
	float pesos;
	float yen;

	cout << fixed << showpoint << setprecision(2);

	cout << "Please input the amount of American Dollars you want converted "
		 << endl;
	cout << "to euros and pesos" << endl;
	cin >> dollars;
    convertMulti(dollars, euros, pesos);


	cout << "Please input the amount of American Dollars you want converted\n";
	cout << " to euros, pesos and yen" << endl;
	cin >> dollars;
    convertMulti(dollars, euros, pesos, yen);


	cout << "Please input the amount of American Dollars you want converted\n";
	cout << " to yen" << endl;
	cin >> dollars;
    yen = convertToYen(dollars);
    cout << "$" << dollars << " was converted to " << yen << " yen." << endl;


	cout << "Please input the amount of American Dollars you want converted\n";
	cout << " to euros" << endl;
	cin >> dollars;
    euros = convertToEuros (dollars);
    cout << "$" << dollars << " was converted to " << euros << " euros." << endl;


	cout << "Please input the amount of American Dollars you want converted\n";
	cout << " to pesos " << endl;
	cin >> dollars;
    pesos = convertToPesos(dollars);
    cout << "$" << dollars << " was converted to " << pesos << " pesos." << endl;

	return 0;
}

// All of the functions are stubs that just serve to test the functions
// Replace with code that will cause the functions to execute properly

//	**************************************************************************
//	convertMulti
//
//	task:	  This function takes a dollar value and converts it to euros
//	          and pesos
//	data in:  dollars
//	data out: euros and pesos
//
//	*************************************************************************

void convertMulti(float dollars, float& euros, float& pesos)
{
    euros = dollars * EURO_EXCHANGE;
    cout << "$" << dollars << " was converted to " << euros << " euros." << endl;
    pesos = dollars * PESO_EXCHANGE;
    cout << "$" << dollars << " was converted to " << pesos << " pesos." << endl;

}

//	************************************************************************
//	convertMulti
//
//	task:	  This function takes a dollar value and converts it to euros
//	          pesos and yen
//	data in:  dollars
//	data out: euros pesos yen
//
//	***********************************************************************

void convertMulti(float dollars, float& euros, float& pesos, float& yen)
{
    euros = dollars * EURO_EXCHANGE;     
    cout << "$" << dollars << " was converted to " << euros << " euros." << endl;
    pesos = dollars * PESO_EXCHANGE;
    cout << "$" << dollars << " was converted to " << pesos << " pesos." << endl;
    yen = dollars * YEN_EXCHANGE;
    cout << "$" << dollars << " was converted to " << yen << " yen." << endl;
}

//	****************************************************************************
//	convertToYen
//
//	task:	       This function takes a dollar value and converts it to yen
//	data in:	   dollars
//	data returned: yen
//
//	***************************************************************************

float convertToYen(float dollars)
{
    float yen;
    yen = dollars * YEN_EXCHANGE;

	return yen;
}

//	****************************************************************************
//	convertToEuros
//
//	task:	       This function takes a dollar value and converts it to euros
//	data in:	   dollars
//	data returned: euros
//
//	****************************************************************************

float convertToEuros(float dollars)
{
    float euros;
    euros = dollars * EURO_EXCHANGE;

	return euros;
}

//	*****************************************************************************
//	convertToPesos
//
//	task:	       This function takes a dollar value and converts it to pesos
//	data in:	   dollars
//	data returned: pesos
//
//	****************************************************************************

float convertToPesos(float dollars)
{
    float pesos;
    pesos = dollars * PESO_EXCHANGE;

	return pesos;
}