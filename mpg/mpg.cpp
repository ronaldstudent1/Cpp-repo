// PROGRAM: mpg
// Written by Skylynn Rivera
// 10.21.2025
//
// This program will determine the fuel efficiency of a car. 

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// variable declarations 
	double miles, gallons, mpg;

	// assign miles and gallons
	miles = 420.5;
	gallons = 14.3;

	// calculate fuel efficiency 
	mpg = miles / gallons;

	// display results 
	cout << setiosflags(ios::fixed) << setprecision(1);
	cout << "FUEL EFFICIENCY PROGRAM" << endl;
	cout << "-----------------------" << endl;
	cout << "Miles Traveled         :" << setw(7) << miles << endl;
	cout << "Gas Used (Gallons)     :" << setw(7) << gallons << endl;
	cout << endl; 
	cout << "FUEL EFFICIENCY OF CAR :" << setw(7) << mpg << " mpg" << endl; 
	cout << endl;

	return 0;
}