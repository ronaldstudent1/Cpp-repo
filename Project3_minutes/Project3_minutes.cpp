// PROGRAM: Project3_minutes
// Written by Skylynn Rivera
// 10.23.2025
//
// This program will display the average minutes per game

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// variable declarations
	int total_games;
	double total_minutes, minutes_per_game;

	// assign total_minutes and total_games
	total_minutes = 1187.5;
	total_games = 25;

	// calculate average minutes per game
	minutes_per_game = total_minutes / total_games;

	// display results
	cout << setiosflags(ios::fixed) << setprecision(1);
	cout << "LITTLE JOHNNY VIOLA'S 2024-2025 BASKETBALL STATS" << endl;
	cout << "------------------------------------------------" << endl;
	cout << endl;
	cout << "TOTAL MINUTES: " << total_minutes << endl;
	cout << "TOTAL GAMES  : " << total_games << endl;
	cout << endl;
	cout << "AVERAGE MINUTES PER GAME: " << minutes_per_game << endl;
	cout << endl;

	return 0;
}
