// PROGRAM: Project5_2Density
// Written by Skylynn Rivera
// 1.29.2026
//
// This program will ask the user for the mass and volume of an object

#include <iostream>

using namespace std;

int main()
{
	// variable declarations
	double mass, volume, density;

	// display greeting
	cout << "WILL IT SINK OR WILL IT FLOAT!?" << endl;
	cout << endl;
	cout << "This program will determine whether or" << endl;
	cout << "not a given object will sink or float" << endl;
	cout << endl;

	// input data
	cout << "Enter the properties of the object below." << endl;
	cout << "Mass (in grams): ";
	cin >> mass;
	cout << "Volume (in cm^3): ";
	cin >> volume;
	cout << endl;

	// calculate section
	density = mass / volume;

	// determine message
	if (density >= 1.0) {
		cout << "the density of the object is " << density << " g/cm^3" << endl;
		cout << "IT SINKS!" << endl;
	}
	
	return 0;

	cout << endl;
	cout << "IT FLOATS!" << endl;
	cout << endl;
	cout << "Thank you for choosing to use this program!" << endl;
	
	return 0;
}