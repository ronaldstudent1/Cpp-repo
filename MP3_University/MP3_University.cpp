// PROGRAM: MP3_University
// Written by Skylynn Rivera
// 1.16.2025
//
// This program will display the total amount a student owes for the semester 

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	// variable declarations 
	int age, hours;
	string fullName, ssNum;
	double total_owed, tuition;

	// assign variables
	const double COST_PER_HOUR = 300.0;
	const double ROOM_AND_BOARD = 2000.0;

	// display greeting
	cout << "OSKIE UNIVERSITY REGISTAR'S OFFICE" << endl;
	cout << "2026 FALL SEMESTER" << endl;
	cout << endl;
	cout << "Welcome! We are here to help you calculate your semester fees." << endl;
	cout << endl;

	// enter data
	cout << "Please enter your age: ";
	cin >> age;
	cin.ignore();
	cout << "Please enter your full name: ";
	getline(cin, fullName);
	cout << "Please enter your social security number: ";
	getline(cin, ssNum);
	cout << "Please enter total semester hours enrolled: ";
	cin >> hours;
	cout << endl;
	cout << "Thank you!" << endl;
	cout << endl;

	// calculation section
	tuition = hours * COST_PER_HOUR;
	total_owed = tuition + ROOM_AND_BOARD;

	// display results
	cout << fixed << setprecision(2);
	cout << "NAME: " << fullName << endl;
	cout << "AGE: " << age << endl;
	cout << "SOCIAL SECURITY # [###-##-###]: " << ssNum << endl;
	cout << "SEMESTER HOURS: " << hours << endl;
	cout << endl;
	cout << "ROOM AND BOARD FEES: " << "$" << ROOM_AND_BOARD << endl;
	cout << "TUITION FEES       : " << "$" << tuition << endl;
	cout <<"                      - - - - " << endl;
	cout << "TOTAL OWED         : " << "$" << total_owed << endl;

	return 0;

}