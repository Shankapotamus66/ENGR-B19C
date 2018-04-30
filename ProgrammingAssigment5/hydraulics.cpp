/*    Engineer: {user}
Assignment: Program Assignment 5
Date: 4-3-18
Description: This program usese two functions to graph a function and create a report called "Report.txt"
*/

#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

void generateGraphPoints(); 
void generateReport(int nval[], int npts, int i, double ymax, double ymin);

int main()
{
    generateGraphPoints(); // will execute generateReport(nval, npts, i, ymax, ymin)

    return 0;
}


//	************************************************************************
//	generateGraphPoints
//
//	task:	  This function uses a function to generate point to be graphed
//
//	data in:  function gets called
//	data out: the points that will be graphed in the generateReport function
//
//	***********************************************************************

void generateGraphPoints()
{
    const double DENSITY = 1.94;
    const double GRAVITY = 32.2;
//    const double CONVERSION_FAC = 1 / 144;
    double height;

    const int MAXPOINTS = 100;
    int i, npts, nval[MAXPOINTS];
    double fval, ymin, ymax, width, sval[MAXPOINTS];

    ymax = 1.0e-5;
    ymin = 1.0e5;
    width = 53;

     // load up the data to be plotted and find the max and min values
    i = 1;
    for(height = 100; height <= 200.0; height += 5.0)
    {
	    sval[i] = (DENSITY * GRAVITY * height) * 1/144; //Formula
        if (sval[i] > ymax) ymax = sval[i];
        if (sval[i] < ymin) ymin = sval[i];
	    i++;
	    if (i >= MAXPOINTS) break;  // don't exceed the maximum points
    }
    npts = i - 1; 
    // scale all the y values
    for (i=1; i <= npts; i++)
    {
        fval =  (sval[i] - ymin)/(ymax - ymin) * (width - 1)  + 1;
    	nval[i] = fval + 0.5;  // convert to an integer value
    }
    generateReport(nval, npts, i, ymax, ymin);
}


//	************************************************************************
//	generateReport
//
//	task:	  This function will create the report and create the graph
//
//	data in:  nval[], npts, i, ymax, ymin
//	data out: Report will be made with the graph
//
//	***********************************************************************

void generateReport(int nval[], int npts, int i, double ymax, double ymin)
{
    ofstream outfile;

    outfile.open("Report.txt");

    char label[] = "                      Pressure";
    char axis[] = "+---------------------------------------------------->";
    char line[] = "|                                                     ";

    outfile << "Andrew Mccuan" << endl
            << "ENGR B19C" << endl
            << "Apr 5, 2018" << endl << endl

            << "Constants for variables used" << endl
            << "Denisty:                1.94 slug/ft^3" << endl
            << "Gravity:                32.2 ft/sec^2" << endl
            << "Conversion factor:      1ft^2/144in^2" << endl << endl;

    //produce the plot
    outfile << "Minimum y value: " << ymin << endl;
    outfile << "Maximum y value: " << ymax << endl;
    outfile << label << endl;
    outfile << axis << endl; 

    cout << "Minimum y value: " << ymin << endl;
    cout << "Maximum y value: " << ymax << endl;
    cout << label << endl;
    cout << axis << endl; 

    for (i = 1;  i <= npts; i++)
    {
	    line[(nval[i] + 2)] = '*';   // set character to an asterisk
        outfile << line << endl;
        cout << line  << endl;       // output the line
        line[(nval[i] + 2)] = ' ';   // reset character to a blank
    }

    outfile.close();
}