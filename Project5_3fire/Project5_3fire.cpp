// PROGRAM: Project5_3fire
// Written by Skylynn Rivera
// 2.2.2026
//
// This program will determine if a meeting room is in violation of fire regulations << endl;

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// variable declarations
	int registered, capacity, exclude;
	string message;

	// display message
	message = "The meeting is safe to hold!";

	// display welcome
	cout << "Welcome to the 2026 SPRING COMPUTER EXPO" << endl;
	cout << "----------------------------------" << endl;
	cout << "This program will help determine if you can hold your meeting in accordance" << endl;
	cout << "with fire regulations" << endl << endl;
	
	// enter data
	cout << "Enter the number of people registered for the meeting: ";
	cin >> registered;
	cout << "Enter the maximum room capacity for the meeting: ";
	cin >> capacity;
	cout << endl;
	cout << "Number of people you must exclude: ";
	cin >> exclude;

	// calculate section
	exclude = registered - capacity;

	// determine message
	if (registered > capacity) {
		message = "the meeting is unsafe to hold!";
	} 

	cout << message << endl; 

	return 0;

}