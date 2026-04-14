// PROGRAM: Project5_2DetermineLarger
// Written by Skylynn Rivera
// 1.21.2026
//
// This program will ask the user to enter in two different integers in random order

#include <iostream>

using namespace std;

int main()
{
	// variable declarations
	int num1, num2;
	int min, max;

	// display greeting
	cout << "Welcome to the LARGER OR SMALLER PROGRAM!" << endl;
	cout << endl;

	// Enter data
	cout << "Enter an integer: ";
	cin >> num1;
	cout << "Enter another integer ";
	cin >> num2;
	cout << endl;

	// assign values
	max = num1;
	min = num2;

	// determine message
	if (num1 > num2)
		min = num2;
	    max = num1;

	// display results
	cout << "The smaller number is " << num2 << "." << endl;
	cout << "The larger number is " << num1 << "." << endl;
	cout << endl;
	cout << "Thank you for using this program." << endl;


}
