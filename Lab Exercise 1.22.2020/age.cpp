//Lab Exercise 1.22.2020 Problem 2
//Author: nmessa

#include <iostream>
using namespace std;

int main()
{
	int years, seconds;
	cout << "How old are you in years? ";
	cin >> years;
	seconds = years * 60 * 60 * 24 * 365;
	cout << "You are " << seconds << " seconds old" << endl;
	return 0;
}

//Sample output
//How old are you in years? 65
//You are 2049840000 seconds old