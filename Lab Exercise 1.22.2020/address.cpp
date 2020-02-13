//Lab Exercise 1.22.2020 Problem 1
//Author: nmessa

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name, address, city, state, zip;
	cout << "Enter your name: ";
	getline(cin, name);
	cout << "Enter your address: ";
	getline(cin, address);
	cout << "Enter your city: ";
	cin >> city;
	cout << "Enter your state: ";
	cin >> state;
	cout << "Enter your zip code: ";
	cin >> zip;

	cout << name << endl;
	cout << address << endl;
	cout << city << ", " << state << "   " << zip << endl;
	return 0;
}

//Sample Output
//Enter your name: Herman Munster
//Enter your address: 13 Mockingbird Lane
//Enter your city: Exeter
//Enter your state: NH
//Enter your zip code: 03833
//Herman Munster
//13 Mockingbird Lane
//Exeter, NH   03833