//Lab Exercise 1/27/2020 Problem 2
//Author: nmessa

#include <iostream>
using namespace std;

int main()
{
	//Declare variables
	const double WIDGET_WEIGHT = 9.2;
	double tare, gross, numWidgets, widgets;

	//get user input
	cout << "How much does the empty pallet weigh? ";
	cin >> tare;
	cout << "How much does the loaded pallet weigh? ";
	cin >> gross;

	//calculate the weight of the widgets
	widgets = gross - tare;

	//calculate the number of widgets on the pallet
	numWidgets = widgets/WIDGET_WEIGHT;

	//print report - note typecast to int
	cout << "There are " << (int)numWidgets << " widgets on the pallet" << endl;

	return 0;
}

//Output
//How much does the empty pallet weigh? 42
//How much does the loaded pallet weigh? 283
//There are 26 widgets on the pallet
