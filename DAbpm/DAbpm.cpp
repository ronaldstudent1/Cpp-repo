// PROGRAM: DAbpm
// Written by Skylynn Rivera
// 3.31.2026
//
// This program will classify a song's tempo based on the Beats Per Minute (BPM).

#include <iostream>

using namespace std;

int main()
{
	// variable declarations
	int BPM;

	// display greeting
	cout << "Music BPM Classifier" << endl;
	cout << "---------------------" << endl;
	cout << endl;
	
	// enter data
	cout << "Enter the beats per minute (BPM) of the song: ";
	cin >> BPM;
	cout << endl;

	// display if statement
	if (BPM < 1)
	{
		cout << "Result:" << endl;
		cout << endl;
		cout << "ERROR! You have entered an invalid number, try again.";
		cout << endl;
	}
	else if (BPM < 60)
	{
		cout << "Result:" << endl;
		cout << endl;
		cout << "This song has a Very Slow (Ambient/Lullaby) tempo." << endl;
	}
	else if (BPM < 91)
	{
		cout << "Result:" << endl;
		cout << endl;
		cout << "This song has a Slow (Ballad/Chill) tempo." << endl;
	}
	else if (BPM < 121)
	{
		cout << "Result:" << endl;
		cout << endl;
		cout << "This song has a Moderate (Pop/Indie) tempo." << endl;
	}
	else if (BPM < 141)
	{
		cout << "Result:" << endl;
		cout << endl;
		cout << "This song has a Upbeat (Dance/Electronic) tempo." << endl;
	}
	else if (BPM < 161)
	{
		cout << "Result:" << endl;
		cout << endl;
		cout << "This song has a Fast (Rock/House) tempo." << endl;
	}
	else if (BPM < 181)
	{
		cout << "Result:" << endl;
		cout << endl;
		cout << "This song has a Very Fast (Techno/Drum & Bass) tempo." << endl;
	}
	else
	{
		cout << "Result:" << endl;
		cout << endl;
		cout << "This song has a Extremely Fast (Speedcore) tempo." << endl;
	}

	return 0;
}