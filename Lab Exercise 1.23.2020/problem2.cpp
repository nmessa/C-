//Lab Exercise 1/23/2020 Problem 2
//Author: nmessa

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double meal = 45.50;
	const double taxRate = 0.0675;
	const double tipRate = 0.15;

	//Calculate tax and tip
	double tax = meal * taxRate;
	double tip = (meal + tax) * tipRate;

	//Calculate total bill
	double total = meal + tax + tip;

	//Setup precision
	cout << setprecision(2) << fixed;

	//Output the bill
	cout << "Meal total:\t$" << meal << endl;
	cout << "Tax:\t\t$" << tax << endl;
	cout << "Tip:\t\t$" << tip << endl;
	cout << "Total:\t\t$" << total << endl;

	return 0;
}

//Output
//Meal total:     $45.50
//Tax:            $3.07
//Tip:            $7.29
//Total:          $55.86
