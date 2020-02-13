//Lab Exercise 2.5.2020 Problem 2
//Author: nmessa

#include <iostream>
#include <string>
using namespace std;

//Function prototypes
double getSales(string);
void findHighest(double, double, double, double);

int main()
{
	//Declare variables
	string division;
	double salesNE, salesSE, salesNW, salesSW;

	//Call getSales function for each geographic area
	salesNE = getSales("Northeast"); 
	salesSE = getSales("Southeast");
	salesNW = getSales("Northwest");
	salesSW = getSales("Southwest");

	//Pass sales totals for each geographic area to findHighest function
	findHighest(salesNE, salesSE, salesNW, salesSW);
	return 0;
}

//This function gets a division name and returns the amount of sales
double getSales(string division)
{
	double amount;
	cout << "Enter the sales for the " << division << " division: ";
	cin >> amount;
	return amount;
}

//This function is passed the sales for each division and prints the name and sales amount for the division
//with the highest sales
void findHighest(double salesNE, double salesSE, double salesNW,
	double salesSW)
{
	string name;
	double max;
	if (salesNE > salesSE)
	{
		max = salesNE;
		name = "Northeast";
	}
	else
	{
		max = salesSE;
		name = "Southeast";
	}
	if (salesNW > max)
	{
		max = salesNW;
		name = "Northwest";
	}
	if (salesSW > max)
	{
		max = salesSW;
		name = "Southwest";
	}
	cout << "The highest sales was " << name << " division" << endl;
	cout << "Sales: " << max << endl;
}

