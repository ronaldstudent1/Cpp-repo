// PROGRAM: Project2_Fixit
// Written by Skylynn Rivera
// 10.8.2025
//
// This program will display a bill 

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// display a bill
	cout << setiosflags(ios::fixed | ios::showpoint)
		<< setprecision(2);
	cout << "      Fixit Roof Repair Service" << endl;
	cout << endl;
	cout << "      Date: October 8. 2025" << endl;
	cout << endl;
	cout << "      Cost of Labor:      $" << setw(6) << 150.00 << endl; 
	cout << "      Cost of Materials:   " << setw(6) << 53.00 << endl;
	cout << "      Tax:                 " << setw(6) << 7.21 << endl;
	cout << "                         - - - -   " << endl;
	cout << "      Total Cost:         $" << setw(6) << 210.21 << endl;
	return 0;
}