//Lab Exercise 2.12.2020 Problem 3
//Author: nmessa

#include <iostream>
#include <iomanip>
using namespace std;

//Defined constants
#define LABOR_COST 27.00
#define COVERAGE 115
#define LABOR 8

//Function prototypes
int getNumRooms();
double getPaintPrice();
double calcSquareFeet(int);
double calcHours(double);
double calcNumGallons(double);
double calcPaintCost(double, double);
double calcLaborCost(double);
double calcTotalCost(double, double);
void printReport(double, double, double, double, double);

int main()
{
	//Declare variables
	int numRooms;
	double squareFeet, hours, numGallons, paintCost, laborCost, 
		totalCost, paint;

	//Get input
	numRooms = getNumRooms();
	paint = getPaintPrice();

	//make calculations
	squareFeet = calcSquareFeet(numRooms);
	hours = calcHours(squareFeet);
	numGallons = calcNumGallons(squareFeet);
	paintCost = calcPaintCost(numGallons, paint);
	laborCost = calcLaborCost(hours);
	totalCost = paintCost + laborCost;
	
	//Output results
	printReport(numGallons, hours, paintCost, laborCost, totalCost);

	return 0;
}

//This function returns the number of rooms to be painted
int getNumRooms()
{
	int rooms;
	cout << "How many rooms to paint? ";
	cin >> rooms;
	return rooms;
}

//This function returns the cost per gallon of paint
double getPaintPrice()
{
	double paint;
	cout << "Enter the cost per gallon of paint: ";
	cin >> paint;
	return paint;
}

//This function returns the total square footage given a number of rooms passed as a parameter 
double calcSquareFeet(int rooms)
{
	double sf = 0.0;
	double area, length, width;
	for (int i = 1; i <= rooms; i++)
	{
		cout << "Enter length of room " << i << ": " ;
		cin >> length;
		cout << "Enter width of room " << i << ": " ;
		cin >> width;
		area = (2 * length + 2 *width) * 8;	//Calculate the area of one room
		sf += area;							//Add room area to the running total
	}
	return sf;
}

//This function returns the number of hours to paint all rooms given the total square footage
//passed as a parameter
double calcHours(double sf)
{
	double hours;
	hours = (sf/COVERAGE) * LABOR ;
	return hours;
}

//This function returns the number of gallons to paint all rooms given the total square footage
//passed as a parameter
double calcNumGallons(double sf)
{
	double gallons;
	gallons = sf / COVERAGE;
	return gallons;
}

//This function is passed number of gallons of paint required and the cost per gallon of paint as
//parameters and returns the cost of the paint
double calcPaintCost(double gallons, double paint)
{
	double cost;
	cost = gallons * paint;
	return cost;
}

//This function is passed the hours require to paint as a parameter and returns the cost of the labor
double calcLaborCost(double hrs)
{
	double cost;
	cost = hrs * LABOR_COST;
	return cost;
}

//This function prints our a formatted report
void printReport(double gals, double hrs, double paint, double labor, double total)
{
	cout << fixed << showpoint << setprecision(1);
	cout << "Number of gallons: " << gals << endl;
	cout << "Number of hours: " << hrs << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "Paint cost:  $" << paint << endl;
	cout << "Labor cost:  $" << labor << endl;
	cout << "Total cost:  $" << total << endl;
}

//Sample Output
//How many rooms to paint? 3
//Enter the cost per gallon of paint: 19.95
//Enter length of room 1: 12
//Enter width of room 1: 15
//Enter length of room 2: 13
//Enter width of room 2: 17
//Enter length of room 3: 15
//Enter width of room 3: 20
//Number of gallons: 12.8
//Number of hours: 102.4
//Paint cost:  $255.36
//Labor cost:  $2764.80
//Total cost:  $3020.16