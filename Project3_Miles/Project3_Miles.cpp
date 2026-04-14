// PROGRAM: Project3_Miles
// Written by Skylynn Rivera
// 12.1.2025
//
// This program will convert a given distance in miles to kilometers

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// variable declarations
	double miles;
	double kilometers;

	// display a heading and greeting
	cout << "MILES TO KILOMETERS" << endl;
	cout << "- - - - - - - - - -" << endl;
	cout << "Welcome! This program will convert a given distance in" << endl;
	cout << "miles to kilometers" << endl;
	cout << endl;

	// get data
	cout << "Enter distance in miles to convert:";
	cin >> miles;
	cout << endl;

    // calculate
	kilometers = miles * 1.609;
	
    // display results
	cout << "CALCULATION COMPLETE!" << endl;
	cout << endl;
	cout << "MILES      = " << miles << endl;
	cout << "KILOMETERS = " << kilometers << endl;
	cout << endl;
	cout << "Thank you for using this program!" << endl;

	return 0;
}


