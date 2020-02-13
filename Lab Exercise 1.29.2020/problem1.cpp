//Lab Exercise 1/29/2020 Problem 1
//Author: nmessa

#include <iostream>
using namespace std;

int main()
{
	//Declare variables
	int num1, num2, num3, max, min;

	//Get 3 integers from user
	cout << "Enter 3 integers (seperated by a space): ";
	cin >> num1 >> num2 >> num3;


	//Determine with integer is the largest
	if (num1 > num2 && num1 > num3)
		max = num1;
	if (num2 > num1 && num2 > num3)
		max = num2;
	if (num3 > num1 && num3 > num2)
		max = num3;

	//Determine with integer is the smallest
	if (num1 < num2 && num1 < num3)
		min = num1;
	if (num2 < num1 && num2 < num3)
		min = num2;
	if (num3 < num1 && num3 < num2)
		min = num3;

	//Output the result
	cout << "Largest = " << max << endl;
	cout << "Smallest = " << min << endl;
	return 0;
}

//Output
//Enter 3 integers (seperated by a space): 3 6 4
//Largest = 6
//Smallest = 3
