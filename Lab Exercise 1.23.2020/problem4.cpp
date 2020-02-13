//Lab Exercise 1/23/2020 Problem 4
//Author: nmessa

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Declare variables required
	double gallons, miles;
	double mpg;

	//Get user input
	cout << "Enter the number of miles traveled: ";
	cin >> miles;
	cout << "Enter the number of gallons to fill tank: ";
	cin >> gallons;

	//Calculate mpg
	mpg = miles/gallons;

	//Output result
	cout << setprecision(1) << fixed;
	cout << "You are getting " << mpg << " miles per gallon" << endl;

	return 0;
}

//Output
//Enter the number of miles traveled: 378
//Enter the number of gallons to fill tank: 12.5
//You are getting 30.2 miles per gallon
