// PROGRAM: Project3_Means
// Written by Skylynn Rivera
// 12.19.2025
//
// This program will display an arithmetic equation

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	// variable declarations
	int num1, num2;
	double harmonicMean, geometricMean, arithmeticMean;

	// display greeting
	cout << "Welcome the Mathematical Means Program!!!" << endl;
	cout << endl;
	cout << "This program will help you calculate the arithmetic, geometric" << endl;
	cout << "and harmonic means of two given real numbers." << endl;
	cout << endl;

	// get data
	cout << "Please enter the 1st number: ";
	cin >> num1;
	cout << endl;
	cout << "Please enter the 2nd number: ";
	cin >> num2;

	// calculate section
	harmonicMean = 2 / ((1 / num1) + (1 / num2));
	arithmeticM
ean = (num1 + num2) / 2;
	geometricMean = sqrt(num1 * num2);
	// display results
	cout << "1st number: " << num1 << endl;
	cout << "2nd number: " << num2 << endl;
	cout << endl;
	cout << "Harmonic Mean  : " << harmonicMean << endl;
	cout << "Geometric Mean : " << geometricMean << endl;
	cout << "Arithmetic Mean: " << arithmeticMean << endl;

	return 0;
}