// PROGRAM: Project3_4strings
// Written by Skylynn Rivera
// 12.15.2025
//
// This program will display strings

#include <iostream>
#include <string>

using namespace std;

int main()
{
	// variable declarations 
	string string10;
	int value;

	// display heading and description
	cout << "Welcome to the String Library Program!" << endl;
	cout << endl;
	cout << "This program will demonstrate the abilities of the" << endl;
	cout << "string library functions available in \"string.h\"." << endl;
	cout << endl;

	// input data
	cout << "Please enter in a string that" << endl;
	cout << "is atleast 10 characters long > ";
	getline(cin, string10);
	cout << endl;
	cout << "Enter integer value between 0-7 > ";
	cin >> value;
	cout << endl;

	// display results
	cout << "Your string is: " << string10 << endl;
	cout << endl;
	cout << "Length      : " << string10.length() << endl;
	cout << "\'a\' Location: " << string10.find('a') << endl;
	cout << "Substring   : " << string10.substr(value, 3) << endl;
	cout << endl;

	return 0;

}
