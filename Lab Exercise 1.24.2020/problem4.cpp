//Lab Exercise 1/24/2020 Problem 4
//Author: nmessa

#include <iostream>
using namespace std;

int main()
{
	//declare variables
	int degrees, minutes, seconds;
	double latitude, longitude;

	//Latitude
	cout << "Enter latitude in degrees, minutes, seconds(seperated by spaces): ";
	cin >> degrees >> minutes >> seconds;
	latitude = degrees + minutes/60.0 + seconds/3600.0;

	//Longitude
	cout << "Enter longitude in degrees, minutes, seconds(seperated by spaces): ";
	cin >> degrees >> minutes >> seconds;
	longitude = degrees + minutes/60.0 + seconds/3600.0;

	cout << "Latitude = " << latitude << " degrees" << endl;
	cout << "Longitude = " << longitude << " degrees" << endl;

	return 0;
}

//Output
//Enter latitude in degrees, minutes, seconds: 37 48 23
//Enter longitude in degrees, minutes, seconds: 23 45 56
//Latitude = 37.8064 degrees
//Longitude = 23.7656 degrees
