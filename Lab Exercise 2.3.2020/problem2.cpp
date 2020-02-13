//Lab Exercise 2/3/2020 Problem 2
//Author: nmessa

#include <iostream>
using namespace std;

int main()
{
	//Declare variables
	int number, max, min;

	//Get number from user to prime the loop
	cout << "Enter an integer: ";
	cin >> number;

	//Set min and max to the number
	max = min = number;

	//keep looping until -99 is entered
	while (number != -99)
	{
		//Enter an integer (-99 to quit)
		cout << "Enter an integer (-99 to quit): ";
		cin >> number;

		//Check for min value and not -99
		if (number < min && number != -99)
			min = number;

		//Check for max value and not -99
		if (number > max && number != -99)
			max = number;
	}

	//Print results
	cout << "Largest number: " << max << endl;
	cout << "Smallest number: " << min << endl;

	return 0;
}
//Output
//Enter an integer: 45
//Enter an integer: 23
//Enter an integer: 76
//Enter an integer: 21
//Enter an integer: -99
//Largest number: 76
//Smallest number: 21