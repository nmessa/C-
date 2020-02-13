//Lab Exercise 1/24/2020 Problem 3
//Author: nmessa

#include <iostream>
using namespace std;

int main()
{
	int feet,  inches;

	cout << "Enter the number of feet: ";
	cin >> feet;

	cout << "Enter the number of inches: ";
	cin >> inches;

	inches = 12 * feet + inches;

	cout << "The player is " << inches << " inches tall" << endl;

	return 0;
}

//Output
//Enter the number of feet: 6
//Enter the number of inches: 3
//The player is 75 inches tall