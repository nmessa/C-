//Lab Exercise 1/29/2020 Problem 4
//Author: nmessa

#include <iostream>
using namespace std;
#define PI 4*atan(1.0)  //Define PI

int main()
{
	//Declare variables
	int choice;
	double area, radius, length, width, base, height;

	//Display menu and get user choice
	cout << "1. Calculate the area of a circle" << endl;
	cout << "2. Calculate the area of a rectangle" << endl;
	cout << "3. Calculate the area of a right triangle" << endl;
	cout << "4. Quit" << endl;
	cout << "\nEnter your choice (1 - 4): ";
	cin >> choice;

	//Calculate the area based upon the choice entered
	switch (choice)
	{
		case 1:
			cout << "Enter the radius of the circle: ";
			cin >> radius;
			area = PI * pow(radius, 2);
			cout << "Area of circle = " << area << endl;
			break;
		case 2:
			cout << "Enter the length of the rectangle: ";
			cin >> length;
			cout << "Enter the width of the rectangle: ";
			cin >> width;
			area = length * width;
			cout << "Area of rectangle = " << area << endl;
			break;
		case 3:
			cout << "Enter the base of the triangle: ";
			cin >> base;
			cout << "Enter the height of the triangle: ";
			cin >> height;
			area = 0.5 * base * height;
			cout << "Area of triangle = " << area << endl;
			break;
		case 4:
			exit(0);
	}
	return 0;
}

//Output
//1. Calculate the area of a circle
//2. Calculate the area of a rectangle
//3. Calculate the area of a right triangle
//4. Quit
//
//Enter your choice (1 - 4): 3
//Enter the base of the triangle: 2
//Enter the height of the triangle: 5
//Area of triangle = 5