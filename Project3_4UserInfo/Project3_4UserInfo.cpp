// PROGRAM: Project3_4UserInfo
// Written by Skylynn Rivera
// 12.10.2025
//
// This program will display an interactive C++ program

#include <iostream>
#include <string>

using namespace std;

int main()
{
	// variable declarations 
	string name, address, city, state, zip_code, telephone, email;

	// display heading and description
	cout << "Welcome to the Skylynn Makeup Store!" << endl;
	cout << endl;
	cout << "This program will collect your information for our payroll" << endl;
	cout << "and beauty services" << endl;
	cout << endl;

	
	 // input data
	cout << "Enter the following information:" << endl;
	cout << endl;

	cout << "Enter your full name:  ";
	getline(cin, name);
	cout << endl;
	
	cout << "Enter your street address:  ";
	getline(cin, address);
	cout << endl;

	cout << "Enter your city :  ";
	cin >> city;
	cout << endl;

	cout << "Enter your state :  ";
	cin >> state;
	cout << endl;

	cout << "Enter your zip code :  ";
	cin >> zip_code;
	cout << endl;

	cout << "Enter your telephone number :  ";
	cin >> telephone;
	cout << endl;

	cout << "Enter your email address :  ";
	cin >> email;
	cout << endl;

	cout << "THANK YOU .  .  ." << endl;
	cout << endl;
	cout << "YOUR INFORMATION:" << endl;

	cout << name << endl;
	cout << address << endl;
	cout << city << ", " << state << " " << zip_code << endl;
	cout << telephone << endl;
	cout << email << endl;
	return 0;
	
}