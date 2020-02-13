//Lab Exercise 1/24/2020 Problem 1
//Author: nmessa

#include <iostream>
using namespace std;

int main()
{
	//declare variables
	int widgets, boxes, leftovers;
	const int widgetsPerBox = 4;

	//get user input
	cout << "Enter the number of widgets you wish to ship: ";
	cin >> widgets;

	//calculate boxes required
	boxes = widgets/widgetsPerBox;
	leftovers = widgets % widgetsPerBox;

	//output results
	cout << "You will have " << boxes << " full boxes" << endl;
	cout << "The last box will have " << leftovers << " widgets" << endl;
	return 0;
}

//Output
//Enter the number of widgets you wish to ship: 75
//You will have 18 full boxes
//The last box will have 3 widgets