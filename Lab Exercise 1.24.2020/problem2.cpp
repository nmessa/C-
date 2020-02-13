//Lab Exercise 1/24/2020 Problem 2
//Author: nmessa

#include <iostream>
using namespace std;

int main()
{
	int feet, inches;

	cout << "Enter the number of inches tall: ";
	cin >> inches;

	feet = inches / 12;
	inches = inches % 12;

	cout << "The player is " << feet << " feet " << inches << " inches" << endl;

	return 0;
}

//Output
//Enter the number of inches tall: 73
//The player is 6 feet 1 inches