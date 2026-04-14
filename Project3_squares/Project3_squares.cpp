// PROGRAM: Project3_squares
// Written by Skylynn Rivera
// 1.5.2026
//
// This program will display a square root program

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	// variable declarations
	double square, cube, square_Root, num;

	// display greeting
	cout << "WELCOME TO THE SQUARE/SQUARE ROOT PROGRAM!" << endl;
	cout << endl;

	// get data
	cout << "Please enter a positive number: ";
	cin >> num;

	// assign
	square = pow(num, 2);
	cube = pow(num, 3);
	square_Root = sqrt(num);

	// display results
	cout << "The square of " << num << " is " << square << "." << endl;
	cout << "The cube of " << num << " is " << cube << "." << endl;
	cout << "The square root of " << num << " is " << square_Root << "." << endl;
	cout << endl;
	cout << "Thank you for using this program!" << endl;
	return 0;
}