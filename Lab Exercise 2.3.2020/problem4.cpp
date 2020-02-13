//Lab Exercise 2/3/2020 Problem 4
//Author: nmessa

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Declare and initialize variables
	int numDays; 
	double amount = 0.01, total = 0.0;

	//Get days worked from user
	cout << "How many days did the employee work? ";
	cin >> numDays;

	//Calculate the amount of earnings
	for (int i = 1; i <= numDays; i++)
	{
		total += amount;
		amount *= 2.0;
	}
	cout << setprecision(2) << fixed;
	cout << "Earnings for the month: $" << total << endl;
	return 0;
}

//Output
//How many days did the employee work? 30
//Earnings for the month: $10737418.23
