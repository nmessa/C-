//Lab Exercise 2.4.2020 Problem 1
//Author: nmessa

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int number, units, tens;
	string roman = "";
	cout << "Enter a number from 1 - 99: ";
	cin >> number;

	//split number into units and tens components
	units = number % 10;
	tens = number / 10;

	//Build the tens part of the Roman numeral string
	switch (tens)
	{
		case 1:
			roman += "X";
			break;
		case 2:
			roman += "XX";
			break;
		case 3:
			roman += "XXX";
			break;
		case 4:
			roman += "XL";
			break;
		case 5:
			roman += "L";
			break;
		case 6:
			roman += "LX";
			break;
		case 7:
			roman += "LXX";
			break;
		case 8:
			roman += "LXXX";
			break;
		case 9:
			roman += "XC";
	}

	//Build the units part of the Roman numeral string
	switch (units)
	{
		case 1:
			roman += "I";
			break;
		case 2:
			roman += "II";
			break;
		case 3:
			roman += "III";
			break;
		case 4:
			roman += "IV";
			break;
		case 5:
			roman += "V";
			break;
		case 6:
			roman += "VI";
			break;
		case 7:
			roman += "VII";
			break;
		case 8:
			roman += "VIII";
			break;
		case 9:
			roman += "IX";
	}

	cout << number << " = " << roman << endl;
	return 0;
}

//Sample Output
//Enter a number from 1 - 99: 87
//87 = LXXXVII

