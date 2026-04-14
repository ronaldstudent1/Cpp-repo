// PROGRAM: Project5_2Movies
// Written by Skylynn Rivera
// 1.14.2026
//
// This program will determine the cost of a movie ticket

#include <iostream>

using namespace std;

int main()
{
	// variable declarations
	int age;
	double cost;
	string message;

	// set cost of ticket for 13 and up
	cost = 15.50;

	// determine message
	message = "The cost of your ticket is $15.50.";

	// display greeting
	cout << "Welcome to AMC Theatres!" << endl;
	cout << endl;
	cout << "This program will determine the" << endl;
	cout << "cost of your movie ticket." << endl;
	cout << endl;

	// get age
	cout << "Please enter your age: ";
	cin >> age; 
	cout << endl;

	// determine message
	if (age <= 12)
		message = "The cost of your ticket is $11.75.";                               

	// display message
	cout << message << endl;
	cout << endl;
	cout << "Enjoy the show!" << endl;
	cout << endl;

	return 0;

}