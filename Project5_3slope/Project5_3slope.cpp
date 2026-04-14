// PROGRAM: Project5_3slope
// Written by Skylynn Rivera
// 2.12.2026
//
// This program will determine the slope of a line passing through two points

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	// variable declarations
	double slope, x1, y1, x2, y2;

	// display greeting
	cout << "SLOPE CALCULATOR!" << endl;
	cout << endl;
	cout << "This program will calculate the slope of a given line." << endl;
	cout << endl;

	// Enter data
	cout << "Enter x1: ";
	cin >> x1;
	cout << "Enter y1: ";
	cin >> y1;
	cout << "Enter x2: ";
	cin >> x2;
	cout << "Enter y2: ";
	cin >> y2;
	cout << endl;

	// determine message
	if (x2 - x1 == 0) {
		cout << "The slope is: undefined";
		cout << endl;
	}
	else {
		double slope = (y2 - y1) / (x2 - x1);
		cout << "The slope is: " << slope << endl;
	}

	return 0;
}