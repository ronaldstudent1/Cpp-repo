// PROGRAM: Project3I_Typing
// Written by Skylynn Rivera
// 11.26.2025
//
// This program will display the average words per minute typed by the user.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// variable declarations
	int words_typed, errors_made, minutes;
	double wpm;

	// display heading and description
	cout << "TYPING SPEED CALCULATOR" << endl;
	cout << "- - - - - - - - - - - -" << endl;
	cout << "Welcome! This program will calculate" << endl;
	cout << "your typing speed." << endl;

	// get data
	cout << "Enter the number of words typed - - - - - >" << endl;
	cin >> words_typed;
	cout << "Enter the number of errors made - - - - - >" << endl;
	cin >> errors_made;
	cout << "Enter the number of minutes spent typing - - - - - >" << endl;
	cin >> minutes;
	cout << endl;

	// calculate
	wpm = words_typed - (errors_made * 5) / minutes;

	// display results
	cout << "CALCULATE COMPLETE!" << endl;
	cout << endl;
	cout << "WORDS TYPED:" << words_typed << endl;
	cout << "ERRORS MADE:" << errors_made << endl;
	cout << "MINUTES    :" << minutes << endl;
	cout << endl;
	cout << "WPM (Words Per Minute):" << wpm << endl;
	cout << "Thank you for using this program!" << endl;

	return 0;
}