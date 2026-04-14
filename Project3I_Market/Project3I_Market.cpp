// PROGRAM: Project3I_Market
// Written by Skylynn Rivera
// 12.8.2025
// 
// This program will display the Penny Spender Supermarket weighing system

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// variable declarations
	double weight, cost, total_cost, costper_lb;
	char item;

	// display a heading
	cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
	cout << endl;
	cout << "       Penny Spender Supermarket " << endl;
	cout << "         Produce Department" << endl;
	cout << endl;

	// get the data
	cout << "Enter 3 Character Description: ";
	cin >> item;                     
	cout << "Weight (in pounds) :";
	cin >> weight;
	cout << "Price/Lb:";
	cin >> cost;
	cout << "Enter cost per pound:";
	cin >> costper_lb;
	cout << endl;

	// calculate total cost
	total_cost = weight * costper_lb;

	// display results
	cout << setiosflags(ios::fixed) << setprecision(2);
	cout << "ITEM" << setw(5) << item << endl;
	cout << "WEIGHT" << setw(5) << weight << endl;
	cout << "COST/lb" << setw(5) << costper_lb << endl;
	cout << "COST" << setw(5) << total_cost << endl;

	return 0;
}
