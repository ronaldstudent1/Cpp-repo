// PROGRAM: Project5_4temp
// Written by Skylynn Rivera
// 3.13.2026
//
// This program will convert degrees Fahrenheit to degress Celsius and degrees Celsius
// to degrees Fahrenheit.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// variable declarations
	char type;
	double degrees;
		
	// display title
	cout << "TEMPERATURE CONVERSION!" << endl;
	cout << endl;
	cout << "This program will convert your given temperature from" << endl;
	cout << "Fahrenheit to Celsius and vice versa." << endl;
	cout << endl;
	cout << "When entering temperature, precede degrees" << endl;
	cout << "with F or C to indicate the given temperature." << endl;
	cout << endl;

	// enter data
	cout << "Please enter degrees to convert: ";
	cin >> type >> degrees;
	cout << endl;

	if (type == 'F' || type == 'f')
	{
		double celsius = (degrees - 32) * 5.0 / 9.0;
		cout << setiosflags(ios::fixed | ios::showpoint) << setprecision(1);
		cout << "Your Celsius temperature is " << celsius << " degrees." << endl;
	}
	else if (type == 'C' || type == 'c')
	{
		double fahrenheit = (degrees * 9.0 / 5.0) + 32;
		cout << setiosflags(ios::fixed | ios::showpoint) << setprecision(1);
		cout << "Your Fahrenheit temperature is " << fahrenheit << " degrees." << endl;
	}
	else
		cout << "ERROR! You have not entered the correct amount. Try again." << endl;

	cout << endl;
	cout << "Thank you for running this program!" << endl;
	cout << endl;

	return 0;
}