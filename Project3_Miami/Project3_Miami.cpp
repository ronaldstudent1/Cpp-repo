// PROGRAM: Project3_Miami
// Written by Skylynn Rivera
// 10.30.2025
//
// This program will display the cost for gas to Miami, Florida and back home

#include <iostream>

using namespace std;

int main()
{
	// variable declarations 
	double distance_to_florida, miles_per_gallon, avgC_pergallon, total_distance, total_cost;

	// assign distance to florida, miles per gallon, and average cost per gallon
	distance_to_florida = 1290.2;
	miles_per_gallon = 32.1;
	avgC_pergallon = 3.86;

	// calculate total distance
	total_distance = distance_to_florida * 2;

	// calculate total cost
	total_cost = total_distance / miles_per_gallon * avgC_pergallon;

	// display results
	cout << "KEVIN GILLESPIE'S TRIP TO MIAMI, FLORIDA AND BACK" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << endl;
	cout << endl;
	cout << "TOTAL DISTANCE: " << total_distance << endl;
	cout << "TOTAL COST    : " << "$" << total_cost << endl;

	return 0;

}