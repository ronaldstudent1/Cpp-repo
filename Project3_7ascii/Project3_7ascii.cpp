// PROGRAM: Project3_7ascii
// Written by Skylynn Rivera
// 1.12.2026
//
// This program will display a character contained within a character set

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// variable declarations
	int letter;

	// display greeting
	cout << "Welcome! This program will tell you the" << endl;
	cout << "ASCII VALUE of a given integer." << endl;
	cout << endl;

	// get data
	cout << "Enter a positive integer from 33 to 126: ";
	cin >> letter;

	// display results
	cout << "The ASCII value of integer " << letter << " is " << char(letter) << endl;
	cout << endl;
	return 0;

}