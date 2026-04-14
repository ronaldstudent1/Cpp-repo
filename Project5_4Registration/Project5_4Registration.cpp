// PROGRAM: Project5_4Registration
// Written by Skylynn Rivera
// 3.5.2026
//
// This program will determine a car registrations cost based on the weight.
//
// Message:
//    Weight        Cost 
//   1-1,500:      $25.50
//  1,501-2,500:   $45.95
//  2,501-3,000:   $75.00
//  Over 3,000 :   $100.00
//  Less than 0: "Error! You have entered in a negative number."
//  Equal to 0 : "Error! You have entered an invalid number."

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// variable declarations 
	int weight;
	double cost;

	// display title
	cout << "NEW JERSEY MOTOR VEHICLES" << endl;
	cout << "VEHICLE REGISTRATION COST" << endl;
	cout << endl;

	// enter data
	cout << "Please enter the weight of the" << endl;
	cout << "vehicle in pounds: ";
	cin >> weight;
	cout << endl;

	// determine vehicle weight
	if (weight < 0)
		cout << "Error! You have entered in a negative number." << endl;
	else if (weight == 0)
		cout << "Error! You have entered in an invalid number." << endl;
	else if (weight <= 1500)
		cout << "Thank you. Your registration cost will be $25.50" << endl;
	else if (weight <= 2500)
		cout << "Thank you. Your registration cost will be $49.95" << endl;
	else if (weight <= 3000)
		cout << "Thank you. Your registration cost will be $75.00" << endl;
	else
		cout << "Thank you. Your registration cost will be $100.00" << endl;

	// display results
	cout << endl;
	cout << "Thank you for registrating your vehicle!" << endl;
	cout << "BUCKLE UP! Drive Safely." << endl;

	return 0;
}

