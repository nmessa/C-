//Lab Exercise 2/13/2020 Problem 1
//Author: nmessa

#include <iostream>
#include <iomanip>
using namespace std;
#define PI 4*atan(1.0)

//Function prototypes
double calcRadius(double);
double calcSurface(double);
double calcCircumference(double);
double calcVolume(double);
void printSphere(double, double, double, double, double);

int main()
{
	//Declare variables
	double diameter, radius, circumference, surfaceArea, volume;

	//Get diameter of sphere from user
	cout << "Enter the diameter of the sphere: ";
	cin >> diameter;

	//Get the radius of the sphere
	radius = calcRadius(diameter);

	//Get the circumference of the sphere
	circumference = calcCircumference(radius);

	//Get the surface area of the sphere
	surfaceArea = calcSurface(radius);

	//Get teh volume of the sphere
	volume = calcVolume(radius);

	//Print the sphere properties
	printSphere(radius, diameter, circumference, surfaceArea, volume);
	return 0;
}

//This function passed the diameter as parameter returns the radius
double calcRadius(double d)
{
	return d / 2.0;
}

//This function passed the radius as parameter returns the surface area
double calcSurface(double r)
{
	return 4.0 * PI * r * r;
}

//This function passed the radius as parameter returns the circumference
double calcCircumference(double r)
{
	return 2.0 * PI * r;
}

//This function passed the radius as parameter returns the volume
double calcVolume(double r)
{
	return (4.0/3) * PI * pow(r, 3);
}

//This function passed the sphere properties prints them out
void printSphere(double r, double d, double c, double sa, double v)
{
	cout << setprecision(3) << fixed;
	cout << "Radius: " << r << endl;
	cout << "Diameter: " << d << endl;
	cout << "Circumference: " << c << endl;
	cout << "Surface Area: " << sa << endl;
	cout << "Volume: " << v << endl;
}

//Output
//Enter the diameter of the sphere: 2
//Radius: 1.000
//Diameter: 2.000
//Circumference: 6.283
//Surface Area: 12.566
//Volume: 4.189