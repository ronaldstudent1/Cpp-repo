// PROGRAM: Project3_WinPercent
// Written by Skylynn Rivera
// 10.24.2025
//
// This program will display the winning percentage of the Brewers

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// variable declarations 
	int wins;
	int losses;
	int total_games;
	double win_percentage;

	// assign total games
	wins = 97;
	losses = 65;

	// calculate total games 
	total_games = wins + losses;

	// calculate winning percentage
	win_percentage = wins / double(total_games) * 100;

    // display results
    cout << setiosflags(ios::fixed) << setprecision(1);
	cout << "2025 MILWAUKEE BREWERS" << endl;
	cout << "----------------------" << endl;
	cout << "WINS          : " << wins << endl;
	cout << "LOSSES        : " << losses << endl;
	cout << endl;
	cout << "WIN PERCENTAGE: " << win_percentage << " % " << endl;
	
	return 0;

}