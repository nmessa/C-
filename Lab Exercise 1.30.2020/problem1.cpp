//Lab Exercise 1/30/2020 Problem 1
//Author: nmessa
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Declare variables
	int choice, feet, speed;
	double time;

	//Display 
	cout << "Choose medium the sound will travel" << endl;
	cout << "1. Air" << endl;
	cout << "2. Water" << endl;
	cout << "3. Steel" << endl;
	cout << "Choice: ";
	cin >> choice;

	//Get the distance the sound will travel
	cout << "Enter number of feet sound will travel: ";
	cin >> feet;

	//Determine the speed of sound for associated medium
	switch (choice)
	{
		case 1: speed = 1100;
			break;
		case 2: speed = 4900;
			break;
		case 3: speed = 16400;
			break;
		default: cout << "Invalid choice" << endl;
					 exit(0);
	}

	//Calculate to the time to travel the defined distance
	time = 1.0 * feet / speed;

	//Setup formatting to fixed to 4 decimal places
	cout << setprecision(4) << fixed;

	//Output the result
	cout << "It will take " << time << " seconds to travel " << feet <<
		" feet\n";
	return 0;
}
//Output
//Choose medium the sound will travel
//1. Air
//2. Water
//3. Steel
//Choice: 3
//Enter number of feet sound will travel: 10000
//It will take 0.6098 seconds to travel 10000 feet
