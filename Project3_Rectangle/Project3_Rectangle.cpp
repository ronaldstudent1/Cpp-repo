// PROGRAM: Project3_Rectangle
// Written by Skylynn Rivera
// 10.27.2025
//
// This program will display the area and perimeter of a rectangle 

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// variable declarations
	double length = 4.5;
	double width = 2.3;
    double area, perimeter;

	// calculate the area and perimeter of a rectangle
	area = length * width;
	perimeter = 2 * length + width;

	// display results
	cout << setiosflags(ios::fixed) << setprecision(2);
	cout << "RECTANGLE PROGRAM" << endl;
	cout << "_ _ _ _ _ _ _ _ _" << endl;
	cout << fixed << setprecision(2) << endl;
	cout << left << setw(10) << "LENGTH   :" << right << setw(6) << length << endl;
	cout << left << setw(10) << "WIDTH    :" << right << setw(6) << width << endl;
	cout << left << setw(10) << "AREA     :" << right << setw(6) << area << endl;
	cout << left << setw(10) << "PERIMETER:" << right << setw(6) << perimeter << endl;

	return 0;

}