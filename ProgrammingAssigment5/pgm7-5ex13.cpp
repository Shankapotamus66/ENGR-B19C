/*    Engineer: {user}
Assignment: Program Assignment 5
Date: 4-3-18
Description: 
*/

#include <iostream>
#include <cmath>
using namespace std;

void Report()

int main()
{
  const double e = 2.71828;
  const int MAXPOINTS = 100;
  int i, npts, nval[MAXPOINTS];
  double t, fval, ymin, ymax, width, sval[MAXPOINTS];
  double E = 50;
  double R = 4000;
  double C = 0.005;

  char label[] = "                      y axis";
  char axis[] = "+---------------------------------------------------->";
  char line[] = "|                                                     ";
  ymax = 1.0e-5;
  ymin = 1.0e5;
  width = 53;

// load up the data to be plotted and find the max and min values
  i = 1;
  for(t = 0; t <= 60.0; t += 2.0)
  {
	sval[i] = E * (1 - pow(e, -t/(R*C)));
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

// produce the plot
  cout << "Minimum y value: " << ymin << endl;
  cout << "Maximum y value: " << ymax << endl;
  cout << label << endl;
  cout << axis << endl;

  for (i = 1;  i <= npts; i++)
  {
	line[(nval[i] + 2)] = '*';   // set character to an asterisk
    cout << line  << endl;       // output the line
    line[(nval[i] + 2)] = ' ';   // reset character to a blank
  }

  return 0;
}