// PROGRAM: Project3_Iceland
// Written by Skylynn Rivera
// 10.22.2025
//
// This program will display the number of people per square mile in Iceland

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// variable declarations 
	double population, square_miles, people_per_square_mile;

	// assign population and square_miles 
    population = 398000.00;
    square_miles = 39769.00;

	// calculate people per square mile in Iceland
	people_per_square_mile = population / square_miles;

	// display results 
	cout << setiosflags(ios::fixed) << setprecision(2);
	cout << "WELCOME TO ICELAND!" << endl; 
	cout << "-------------------" << endl;
	cout << "Population of Iceland  :" << setw(9) << population << endl;
	cout << "Square Miles in Iceland:" << setw(9) << square_miles << endl;
	cout << endl;
	cout << "PEOPLE PER SQUARE MILE IN ICELAND: " << people_per_square_mile << endl;
	cout << endl;

	return 0;
}