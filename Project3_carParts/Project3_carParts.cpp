// PROGRAM: Project3_carParts
// Written by Skylynn Rivera
// 11.17.2025
//
// This program will determine how many car windows and seats were sold
// between two different car models

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// variable declarations
	int carA_Windows, carA_seats, quanity_carAsold, carB_Windows;
	int carB_Seats, quantity_carBsold, total_ofwindows, total_ofseats;

	// assign car A and car B factors
	carA_Windows = 4;
	carA_seats = 2;
	quanity_carAsold = 20;
	carB_Windows = 6;
	carB_Seats = 4;
	quantity_carBsold = 10;

	// calculate 
	quantity_carBsold = 10;
	quantity_carBsold = 10;
	total_ofwindows = (carA_Windows * quanity_carAsold) + (carB_Windows * quantity_carBsold);
	total_ofseats = (carA_seats * quanity_carAsold) + (carB_Seats * quantity_carBsold);

	cout << "CUSTOM CAR COMPANY" << endl;
	cout << endl;
	cout << "CAR A:                     CAR B:" << endl;
	cout << "------                     ------" << endl;
	cout << "WINDOWS: 4                 WINDOWS: 6" << endl;
	cout << "SEATS  : 2                 SEATS  : 4" << endl;
	cout << "# SOLD : 20                # SOLD : 10" << endl;
	cout << endl;
	cout << "TOTAL WINDOWS SOLD:  " << total_ofwindows << endl;
	cout << "TOTAL SEATS SOLD  :  " << total_ofseats << endl;

	return 0;
}
	
