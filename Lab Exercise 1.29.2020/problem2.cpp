//Lab Exercise 1/29/2020 Problem 2
//Author: nmessa

#include <iostream>
#include <string>
using namespace std;

int main()
{
	//Declare variable
	string state;

	//Get state abreviation from user
	cout << "Enter a state abreviation (NH, VT, ME, MA, or NY): ";
	cin >> state;

	//determine and output the name of the state
	if (state == "NH")
		cout << "New Hampshire\n";
	else if (state =="VT")
		cout << "Vermont\n";
	else if (state == "ME")
		cout << "Maine\n";
	else if (state == "MA")
		cout << "Massachusetts\n";
	else if (state == "NY")
		cout << "New York\n";
	else
		cout << "Not a valid state\n";
	
	return 0;
}

//Output
//Enter a state abreviation (NH, VT, ME, MA, or NY): NH
//New Hampshire