// PROGRAM: Project3I_NWPC
// Written by Skylynn Rivera
// 12.22.2025
//
// This program will display the user's total purchase

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// variable declarations
	int pc, mem, drive, software;
	double sub, tax, total, pc_total, mem_total, drive_total, software_total;

	// display greeting/heading
	cout << "Welcome to New Wave Computers! Let's get to shopping" << endl;

	// get data
	cout << endl; 
	cout << "How many NW-PC's would you like to buy? < ";
	cin >> pc;
	cout << "How many MEMORY CARDS would you like to buy? < ";
	cin >> mem;
	cout << "How many 4TB. EXTERNAL DRIVES would you like to buy? < ";
	cin >> drive;
	cout << "How many SOFTWARE PACKAGES would you like to buy? < ";
	cin >> software;

	// calculate 
	pc_total = pc * 675;
	mem_total = mem * 69.95;
	drive_total = drive * 80.50;
	software_total = software * 34.98;
	sub = pc_total + mem_total + drive_total + software_total;
	tax = sub * 0.03;
	total = sub + tax;

	// display results
	cout << fixed << setprecision(2);
	cout << "***************************" << endl;
	cout << "    New Wave Computers" << endl;
	cout << endl;
	cout << "  ITEM            COST" << endl;
	cout << endl;
	cout << "  NW-PC           $" << pc_total << endl;
	cout << "  Memory Card     $" << mem_total << endl;
	cout << "  4TB Ext. Drive  $" << drive_total << endl;
	cout << "  Software Pkg.   $" << software_total << endl;
	cout << "_ _ _ _ _ _ _ _   ------" << endl;
	cout << "Sub Total         $" << sub << endl;
	cout << "Tax               $" << tax << endl;
	cout << "_ _ _ _ _ _ _ _   ------" << endl;
	cout << "Total Due         $" << total << endl;
	cout << endl;
	cout << "Thank you for shopping with us!" << endl;

	return 0;

}