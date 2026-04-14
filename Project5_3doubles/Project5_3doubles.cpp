// PROGRAM: Project5_3doubles
// Written by Skylynn Rivera
// 2.19.2026
//
// This program will read the sum of numbers

#include <iostream>
#include <cmath>

using namespace std;

int main()  
{
	// variable declarations
	double num1, num2, num3, num4, num5,
		num6, num7, num8, num9, num10,
		totPositives, sumPositives,
		average;
	// initialize total positives and the sum
	totPositives = 0;
	sumPositives = 0;
	// display greeting
	cout << "DOUBLES! DOUBLES! DOUBLES!" << endl;
	cout << endl;
	cout << "This program will count and tally the sum of" << endl;
	cout << "your positive numbers." << endl;
	cout << endl;
	// get numbers from user
	cout << "Enter #1 : ";
	cin >> num1;
	cout << "Enter #2 : ";
	cin >> num2;
	cout << "Enter #3 : ";
	cin >> num3;
	cout << "Enter #4 : ";
	cin >> num4;
	cout << "Enter #5 : ";
	cin >> num5;
	cout << "Enter #6 : ";
	cin >> num6;
	cout << "Enter #7 : ";
	cin >> num7;
	cout << "Enter #8 : ";
	cin >> num8;
	cout << "Enter #9 : ";
	cin >> num9;
	cout << "Enter #10 : ";
	cin >> num10;
	cout << endl;
	// determine if values are positive
	if (num1 > 0)
	{
		totPositives = totPositives + 1;
		sumPositives = sumPositives + num1;
	}

	if (num2 > 0)
	{
		totPositives = totPositives + 1;
		sumPositives = sumPositives + num2;
	}
	if (num3 > 0)
	{
		totPositives = totPositives + 1;
		sumPositives = sumPositives + num3;
	}
	if (num4 > 0)
	{
		totPositives = totPositives + 1;
		sumPositives = sumPositives + num4;
	}
	if (num5 > 0)
	{
		totPositives = totPositives + 1;
		sumPositives = sumPositives + num5;
	}
	if (num6 > 0)
	{
		totPositives = totPositives + 1;
		sumPositives = sumPositives + num6;
	}
	if (num7 > 0)
	{
		totPositives = totPositives + 1;
		sumPositives = sumPositives + num7;
	}
	if (num8 > 0)
	{
		totPositives = totPositives + 1;
		sumPositives = sumPositives + num8;
	}
	if (num9 > 0)
	{
		totPositives = totPositives + 1;
		sumPositives = sumPositives + num9;
	}

	if (num10 > 0)
	{
		totPositives = totPositives + 1;
		sumPositives = sumPositives + num10;
	}
	// calculate the average of the positive values
	average = sumPositives / totPositives;
	// display results
	cout << "Total number of positive doubles: " << totPositives << endl;
	cout << "Total sum of positive doubles : " << sumPositives << endl;
	cout << "Average of positive doubles : " << average << endl;
	cout << endl;
	return 0;

	return 0;
}