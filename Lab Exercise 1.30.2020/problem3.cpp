//Lab Exercise 1/30/2020 Problem 3
//Author: nmessa

#include <iostream>
using namespace std;

//Define state change points
#define EF -173
#define EB 172
#define MF -38
#define MB 676
#define OF -362
#define OB -306
#define WF 32
#define WB 212

int main()
{
	//Declare variable
	int temp;

	//Get temperature from user
	cout << "Enter the temperature (degrees F): ";
	cin >> temp;

	//check Ethyl Alcohol state
	if (temp <= EF)
		cout << "Ethyl alcohol will freeze" << endl;
	else if (temp >= EB)
		cout << "Ethyl alcohol will boil" << endl;

	//check Mercury state
	if (temp <= MF)
		cout << "Mercury will freeze" << endl;
	else if (temp >= MB)
		cout << "Mercury will boil" << endl;

	//check Oxygen state
	if (temp <= OF)
		cout << "Oxygen will freeze" << endl;
	else if (temp >= OB)
		cout << "Oxygen will boil" << endl;

	//check Water state
	if (temp <= WF)
		cout << "Water will freeze" << endl;
	else if (temp >= WB)
		cout << "Water will boil" << endl;

	return 0;
}

//Output
//Enter the temperature (degrees F): -20
//Oxygen will boil
//Water will freeze