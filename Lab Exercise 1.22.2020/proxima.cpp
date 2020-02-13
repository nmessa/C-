//Lab Exercise 1.22.2020 Problem 3
//Author: nmessa

#include <iostream>
using namespace std;

int main()
{
	double miles;
	double lightyears = 4.22;
	double lightspeed = 186000;
	double secondsPerMinute = 60;
	double minutesPerHour = 60;
	double hoursPerDay = 24;
	double daysPerYear = 365;
	miles = lightyears * lightspeed * secondsPerMinute * minutesPerHour 
		* hoursPerDay * daysPerYear;
	cout << "It is " << miles << " miles to Proxima Cenauri" << endl;;
	cout << "It takes " << lightyears << " years for TV too reach Proxima Cenauri\n";
	return 0;
}

//Sample Output
//It is 2.47532e+013 miles to Proxima Cenauri
//It takes 4.22 years for TV too reach Proxima Cenauri