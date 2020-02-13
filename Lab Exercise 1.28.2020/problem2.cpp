//Lab Exercise 1/28/2020 Problem 2
//Author: nmessa

#include <iostream>
using namespace std;

int main()
{
	//Declare variables
	double kilometers, nauticalMiles;

	//Get number of kilometers from user
	cout << "Enter the number of kilometers: ";
	cin >> kilometers;

	//Calculate number of nautical miles
	nauticalMiles = kilometers / 10000.0 * 90 * 60;

	//Output the result
	cout << kilometers << " kilometers = " << nauticalMiles 
		<< " nautical miles\n";
	return 0;
}

//Output
//Enter the number of kilometers: 10
//10 kilometers = 5.4 nautical miles