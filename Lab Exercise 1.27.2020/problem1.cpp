//Lab Exercise 1/27/2020 Problem 1
//Author: nmessa

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//define constants
	const double FLOOR = 8.95;
	const double BALCONY = 9.50;
	const double LOGE = 11.25;

	//declare variables
	double numFloor, numBalcony, numLoge, total;

	//get user input
	cout << "How many floor seats? ";
	cin >> numFloor;
	cout << "How many balcony seats? ";
	cin >> numBalcony;
	cout << "How many loge seats? ";
	cin >> numLoge;

	//calculate revenue
	total = numFloor * FLOOR + numBalcony * BALCONY + numLoge * LOGE;

	//Output report
	cout << setprecision(2) << fixed;
	cout << "Total amount of ticket sales: $" << total << endl;
	return 0;
}

//Output
//How many floor seats? 135
//How many balcony seats? 212
//How many loge seats? 155
//Total amount of ticket sales: $4966.00
