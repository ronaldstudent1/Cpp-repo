// PROGRAM: Project3_College
// Written by Skylynn Rivera
// 11.12.2025
//
// This program will display the amount the tuitions, fees, and money he will need to take
// out in loans in order to go to school

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// variable declarations
	double tuitionThisYear, roomBoardThisYear, income, tuitionNextYear, roomBoardNextYear, total_cost, amountNeeded; 

	// assign tuition this year, room and board fees this year, and income
	tuitionThisYear = 44000;
	roomBoardThisYear = 7500;
	income = 22000;

	// calculate tuition, room & board, total cost, and amount needed next year
	tuitionNextYear = tuitionThisYear * 1.05;
	roomBoardNextYear = roomBoardThisYear * 1.10;
	total_cost = tuitionNextYear + roomBoardNextYear; 
	amountNeeded = total_cost - income;

	// display results
    cout << "EDWARD'S COLLEGE EXPENSES FOR 2025-2026 SEATTLE UNIVERSITY" << endl; 
	cout << endl;
	cout << "TUITION     ROOM/BOARD    TOTAL COST    AMOUNT NEEDED IN LOANS " << endl;
	cout << "$" << setw(4) << tuitionNextYear << "      $" << setw(4) << roomBoardNextYear
		<< "         $" << setw(4) << total_cost << "        $" << setw(4) << amountNeeded << endl;

    
	return 0;

}