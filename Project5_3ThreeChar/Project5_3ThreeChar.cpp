// PROGRAM: Project5_3ThreeChar
// Written by Skylynn Rivera
// 2.25.2026
//
// This program wil read in a three letter character word and tell the user if the letters 
// of the word have been input in alpahebtical order

#include <iostream>

using namespace std;

int main()
{
	// variable declarations
	char letter1, letter2, letter3;

	// display title
	cout << "THREE CHARACTER WORDS!" << endl;
	
	// enter data
	cout << "Please enter a three character word: ";
	cin >> letter1 >> letter2 >> letter3;
	cout << endl;

	// display statement
	if (letter1 <= letter2 && letter2 <= letter3)                                                                                                                                                                                                                                                                                             
		cout << "The characters of your word " << letter1 << letter2 << letter3 << " were entered in alphabetically." << endl;
	else
		cout << "The characters of your word " << letter1 << letter2 << letter3 << " were not entered in alphabetically." << endl;
     	cout << endl;
		cout << "Thank you for running this program!" << endl;
		
		return 0;
}