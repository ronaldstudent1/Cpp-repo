// PROGRAM: Project5_3stats
// Written by Skylynn Rivera
// 2.17.2026
//
// This program will calculate a user's sports statistics for them 

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// variable declaratons
	double bats, walks, hits, field_goals, fields_missed, totalNumber;;
	double batting_average, field_percentage;

	// display greeting
	cout << "WELCOME TO THE SPORTS STATS CALCULATOR" << endl;
	cout << endl;
	
	int choice;
	cout << "Which sport do you play? (1 for baseball, 2 for basketball) : ";
	cin >> choice;
	cout << endl;

	// determine if statement
	if (choice == 1) { 
		cout << "You have chosen baseball! We will calculate your average." << endl;
		cout << endl;
		cout << "Enter number of at-bats: ";
		cin >> bats;
		cout << "Enter number of walks  : ";
		cin >> walks;
		cout << "Enter number of hits   : ";
		cin >> hits;
		// calculate section
		batting_average = hits / (bats - walks);
		// display results
		cout << endl;
		cout << setiosflags(ios::fixed | ios::showpoint) << setprecision(3);
		cout << "Your batting average is: " << batting_average << endl;
		cout << endl;
		cout << "Thank you for using this program!" << endl;
	}
	else {
		cout << "You have chosen basketball! We will calculate your FG%." << endl;
		cout << endl;
		cout << "Enter number of field goals made: ";
		cin >> field_goals;
		cout << "Enter nymber of field goals missed: ";
		cin >> fields_missed;
		cout << endl;
		// calculation section
		totalNumber = field_goals + fields_missed;
		field_percentage = (field_goals / totalNumber) * 100;
		// display results
		cout << setiosflags(ios::fixed | ios::showpoint) << setprecision(1);
		cout << "Your field goal percentage is: " << field_percentage << endl;
		cout << endl;
		cout << "Thank you for using this program!" << endl;

	}
	
	return 0;
}