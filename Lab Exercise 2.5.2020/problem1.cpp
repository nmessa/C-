//Lab Exercise 2/5/2020 Problem 1
//Author: nmessa

#include <iostream>
#include <iomanip>
using namespace std;

//Define constant acceleration due to gravity
#define G 9.8

//Function prototype
double fallingDistance(int);

int main()
{
	//Declare variables
	double distance;
	cout << "Time\tDistance" << endl;
	cout << setprecision(3) << fixed;

	//Build table of falling distances for freefalling object for 10 seconds
	for (int i = 1; i <= 10; i++)
	{
		distance = fallingDistance(i);
		cout << i << "\t" << distance << endl;
	}
	return 0;
}

//This function is passed the time of fall and returns the distance an object has fallen
double fallingDistance(int t)
{
	double distance;
	distance = 0.5 * G * t * t;
	return distance;
}

//Time    Distance
//1       4.900
//2       19.600
//3       44.100
//4       78.400
//5       122.500
//6       176.400
//7       240.100
//8       313.600
//9       396.900
//10      490.000