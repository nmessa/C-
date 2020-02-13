//Lab Exercise 1/27/2020 Problem 3
//Author: nmessa

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Declare variables
	const double YEN_PER_DOLLAR = 109.60;
	const double EUROS_PER_DOLLAR = 0.91;
	double money, jMoney, eMoney;

	//Get number of dollars to convert from user
	cout << "Enter the number of dollars to convert: ";
	cin >> money;

	//Setup formatting
	cout << setprecision(2) << fixed;

	//Calculate value of money
	jMoney = money * YEN_PER_DOLLAR;
	eMoney = money * EUROS_PER_DOLLAR;

	//Output report
	cout << "Amount converted: $" << money << endl;
	cout << "Yen = " << jMoney << " yen" << endl;
	cout << "Euros = " << eMoney << " euros" << endl;
	return 0;
}

//Output
//Enter the number of dollars to convert: 1000
//Amount converted: $1000.00
//Yen = 109600.00 yen
//Euros = 910.00 euros

