//Lab Exercise 1/29/2020 Problem 3
//Author: nmessa

#include <iostream>
using namespace std;

int main()
{
	//Declare variables
	int score, choice = 0;

	//Get test score from user
	cout << "Enter the test score: ";
	cin >> score;

	//Determine if score is valid
	//If valid score, determine and output the letter grade
	if (score < 0 || score > 100)
	{
		cout << "Invalid score value" << endl;
	}
	else
	{
		choice = score / 10;
		switch (choice)
		{
			case 10:
			case 9:
				cout << "A" << endl;
				break;
			case 8:
				cout << "B" << endl;
				break;
			case 7:
				cout << "C" << endl;
				break;
			case 6:
				cout << "D" << endl;
				break;
			default:
				cout << "F" << endl;
		}
	}
	return 0;
}
