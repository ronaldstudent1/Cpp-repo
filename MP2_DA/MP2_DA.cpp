// PROGRAM: MP2_DA
// Written by Skylynn Rivera
// 1.22.2026
//
// This program will find the price per square inch of a pizza

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	// variable declarations
	double pi, area, price_per_square_inch, price, radius;
	int diameter;

	// assign variables
	pi = 3.14;

	// display greeting
	cout << "Welcome to the Economy Pizza Program!!!" << endl;
	cout << endl;
	cout << "This program will help you calculate price per square inch" << endl;
	cout << "of the pizza purchased." << endl;
	cout << endl;

	// input data
	cout << "Please enter the pizza price and press <Enter>: ";
	cin >> price;
	cout << "Please enter the pizza size in inches and press <Enter>: ";
	cin >> diameter;
	cout << endl;

	// calculate section
	radius = diameter / 2;
	area = pi * radius;
	price_per_square_inch = price / area;

	// display results
	cout << "The price per square inch of pizza is " << "$" << price_per_square_inch << endl;
	cout << endl;
	cout << "Thank you for using this program!" << endl;

	return 0;

}
