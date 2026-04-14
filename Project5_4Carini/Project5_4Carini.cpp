// PROGRAM: Project5_4Carini
// Written by Skylynn Rivera
// 3.6.3036
// 
// This program will determine the yearly income based on the rate percentage.
// 
// Message:
// INCOME           RATE
// $1-5,000          0
// $5,001-10,000     3%
// 10,001-20,000    5.5%
// 20,001-40,000    10.8%
// Over 40,000      23.7%
// Less than 0: "ERROR! You have entered in a negative number."
// Equal to 0:  "ERROR! You don't have to pay taxes!"

#include <iostream>

using namespace std;

int main()
{
	// variable declarations
	 double income, taxes;

	// display title
	cout << "ISLAND OF CARINI TAXATION SERVICES" << endl;
	cout << endl;

	// enter data
	cout << "Welcome! Please enter your yearly income: ";
	cin >> income;
	cout << endl;
	cout << "Thank you." << endl;
	cout << endl;

	// determine if statement
	if (income < 0)
		cout << "ERROR! You have entered in a negative number." << endl;
	else if (income == 0)
		cout << "ERROR! You don't have to pay taxes!." << endl;
	else if (income < 5000)
	{
		taxes = 0;
		cout << "YEARLY INCOME: " << "$" << income << endl;
		cout << "TAXES OWED   : " << "$" << taxes << endl;
	}
	else if (income <= 10000)
	{
		taxes = income * 0.03;
		cout << "YEARLY INCOME: " << "$" << income << endl;
		cout << "TAXES OWED   : " << "$" << taxes << endl;
	}

	else if (income <= 20000)
	{
		taxes = income * 0.055;
		cout << "YEARLY INCOME: " << "$" << income << endl;
		cout << "TAXES OWED   : " << "$" << taxes << endl;
	}

	else if (income <= 40000)
	{
		taxes = income * 0.108;
		cout << "YEARLY INCOME: " << "$" << income << endl;
		cout << "TAXES OWED   : " << "$" << taxes << endl;
	}
	else
	{
		taxes = income * 0.237;
		cout << "YEARLY INCOME: " << "$" << income << endl;
		cout << "TAXES OWED   : " << "$" << taxes << endl;
	}

	// display thank you
	cout << endl;
	cout << "THE ISLAND OF CARINI THANKS YOU FOR YOUR PROMPT TAX PAYMENT." << endl;

	return 0;
}  