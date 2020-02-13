//Lab Exercise 1/30/2020 Problem 2
//Author: nmessa

#include <iostream>
using namespace std;

int main()
{
	//Declare variables
	int month, day, year;

	//Get the month, day, and year from user
	cout << "Enter the month, day, and year (mm dd yy):";
	cin >> month >> day >> year;

	//Determine if it is a Magic Date
	if (month * day == year)
		cout << "Magic date!!!!" << endl;
	else
		cout << "Not a magic date!!!!" << endl;
	return 0;
}
//Output
//Enter the month, day, and year (mm dd yy):6 10 60
//Magic date!!!!