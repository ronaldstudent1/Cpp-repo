// PROGRAM: Project5_4English2Metric
// Written by Skylynn Rivera
// 3.11.2026
//
// This program will display English-to-metric conversions.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// variable declarations
	char type;
	double result, amount;

	// display title
	cout << "Mr. Mike Rosoft's Metric Conversions!" << endl;
	cout << endl;
	cout << "This program will determine your conversion." << endl;
	cout << endl;
	cout << ".::MENU::." << endl;
	cout << endl;
	cout << "P - Pounds" << endl;
	cout << "F - Feet" << endl;
	cout << "M - Miles" << endl;
	cout << endl;

	// enter data
	cout << "Please enter your information below:" << endl;
	cout << endl;
	cout << "Please enter the type of measurement [ P / F / M ] : ";
	cin >> type;
	cout << endl;

	if (type == 'P' || type == 'p')
	{
		cout << "OK! Please enter the number of pounds: ";
		cin >> amount;
		result = amount * 4.9;
		cout << endl;
		cout << "Calculating..." << endl;
		cout << endl;
		cout << setiosflags(ios::fixed | ios::showpoint) << setprecision(2);
		cout << amount << " pounds " << "=   " << result << " newtons" << endl;
	}

	else if (type == 'F' || type == 'f')
	{
		cout << "OK! Please enter the number of feet: ";
		cin >> amount;
		result = amount / 3.28;
		cout << endl;
		cout << "Calculating..." << endl;
		cout << endl;
		cout << setiosflags(ios::fixed | ios::showpoint) << setprecision(2);
		cout << amount << " feet " << "=   " << result << " meters" << endl;
	}
	else if (type == 'M' || type == 'm')
	{
		cout << "OK! Please enter the number of miles: ";
		cin >> amount;
		result = amount * 1.61;
		cout << endl;
		cout << "Calculating..." << endl;
		cout << endl;
		cout << setiosflags(ios::fixed | ios::showpoint) << setprecision(2);
		cout << amount << " miles " << "=   " << result << " kilometers" << endl;
	}
	else
		cout << "ERROR! You have not entered one of the three options." << endl;
	    cout << endl;

	cout << "Have a great day!" << endl;
	cout << endl;

	return 0;

}