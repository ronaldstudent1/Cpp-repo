// PROGRAM: Project5_4LowGrade
// Written by Skylynn Rivera
// 3.23.2026
//
// This program will accept five test scores and print their averages

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// variable declarations
	char grade;
	double g1, g2, g3, g4, g5;

	// display title
	cout << "Dr. Lae Z. Programmer's Average Calculator" << endl;
	cout << "Your lowest grade will be dropped" << endl;
	cout << endl;
 
	// enter data
	cout << "Enter Test Grade #1: ";
	cin >> g1;
	cout << "Enter Test Grade #2: ";
	cin >> g2;
	cout << "Enter Test Grade #3: ";
	cin >> g3;
	cout << "Enter Test Grade #4: ";
	cin >> g4;
	cout << "Enter Test Grade #5: ";
	cin >> g5;



	// determine lowest number
	double lowest = g1;
	if (g1 < lowest) lowest = g1;
	if (g2 < lowest) lowest = g2;
	if (g3 < lowest) lowest = g3;
    if (g4 < lowest) lowest = g4;
	if (g5 < lowest) lowest = g5;

	// calculate section
	double sum = g1 + g2 + g3 + g4 + g5;
	double avg = (sum - lowest) / 4;

	cout << setiosflags(ios::fixed | ios::showpoint) << setprecision(1);
	cout << endl;
	cout << "Your numerical average is: " << avg << endl;

	// determine if statement
	if (avg >= 90)
		grade = 'A';
	else if (avg >= 80)
		grade = 'B';
	else if (avg >= 70)
		grade = 'C';
	else if (avg >= 60)
		grade = 'D';
	else
		grade = 'F';

	// display results
	cout << "Your letter grade is : " << grade << endl;

	return 0;
}