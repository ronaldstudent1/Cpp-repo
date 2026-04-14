// PROGRAM: project2_3employee
// Written by Skylynn Rivera
// 10.7.2025
//
// This program will display the wages of five employees

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// display wages
	cout << setiosflags(ios::fixed | ios::showpoint)
		 << setprecision(2);

	cout << "Employee  Hourly Wage" << endl;
	cout << "                    " << endl;
	cout << "1           $" << setw(5) << 6.65 << endl; 
	cout << "2           $" << setw(5) << 8.10 << endl;
	cout << "3           $" << setw(5) << 4.89 << endl;
	cout << "4           $" << setw(5) << 10.00 << endl;
	cout << "5           $" << setw(5) << 8.50 << endl;

	return 0;
}