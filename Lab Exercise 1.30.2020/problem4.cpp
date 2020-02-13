//Lab Exercise 1/30/2020 Problem 4
//Author: nmessa

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	//Declare variables
	ifstream infile;
	int ethylFreeze;
	int mercuryFreeze;
	int oxygenFreeze;
	int waterFreeze;
	int ethylBoil;
	int mercuryBoil;
	int oxygenBoil;
	int waterBoil;
	int temperature;

	//Read in data from file
	infile.open("Frzboil.dat");
	infile >> ethylFreeze;
	infile >> mercuryFreeze;
	infile >> oxygenFreeze;
	infile >> waterFreeze;
	infile >> ethylBoil;
	infile >> mercuryBoil;
	infile >> oxygenBoil;
	infile >> waterBoil;
	infile.close();

	//Get input from user
	cout << "Enter a temperature: ";
	cin >> temperature;

	//Determine which substances will freeze
	if (temperature <= ethylFreeze)
		cout << "Ethyl alcohol will freeze" << endl;
	if (temperature <= mercuryFreeze)
		cout << "Mercury will freeze" << endl;
	if (temperature <= oxygenFreeze)
		cout << "Oxygen will freeze" << endl;
	if (temperature <= waterFreeze)
		cout << "Water will freeze" << endl;

	//Determine which substances will boil
	if (temperature >= ethylBoil)
		cout << "Ethyl alcohol will boil" << endl;
	if (temperature >= mercuryBoil)
		cout << "Mercury will boil" << endl;
	if (temperature >= oxygenBoil)
		cout << "Oxygen will boil" << endl;
	if (temperature >= waterBoil)
		cout << "Water will boil" << endl;

	return 0;
}

//Sample Output
//Enter a temperature: 20
//Water will freeze
//Oxygen will boil
