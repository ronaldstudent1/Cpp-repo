// PROGRAM: Project3I_Temp
// Written by Skylynn Rivera
// 11.19.2025
//
// This program will convert a given Fahrenheit temperature to degrees Celsius

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// variable declarations
	double fahrenheit = 0.0;
	double celsius = 0.0; 

	// display heading and description
	cout << "FAHRENHEIT TO CELSIUS" << endl;
	cout << "- - - - - - - - - - -" << endl;
	cout << endl;
	cout << "Welcome! This program will convert a given Fahrenheit" << endl;
	cout << "temperature into degrees Celsius." << endl; 
	cout << endl;

	// get data
	cout << "Enter Fahrenheit temperature to convert:";
	cin >> fahrenheit;
	cout << endl;

	// calculate 
	celsius = (fahrenheit - 32) * 5.0 / 9.0;

    // display results
	cout << "CALCULATION COMPLETE!" << endl;
	cout << setiosflags(ios::fixed) << setprecision(1);
	cout << endl;
	cout << "FAHRENHEIT TEMP = " << fahrenheit << endl;
	cout << "CELSIUS TEMP = " << celsius << endl;
	cout << endl;
	cout << "Thank you for using this program!" << endl;

	return 0;
}