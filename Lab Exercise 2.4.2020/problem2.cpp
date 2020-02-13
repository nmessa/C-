//Lab Exercise 2.4.2020 Problem 2
//Author: nmessa

#include <iostream>
using namespace std;

int main()
{
	//Declare varaibles
	int calories, fatGrams, fatCalories;
	double percentageFat;

	//Get input from user
	cout << "Enter the number of calories: ";
	cin >> calories;
	cout << "Enter the number of fat grams: ";
	cin >> fatGrams;

	//Calcualte fatCalories and percentage fat
	fatCalories = fatGrams * 9;
	percentageFat = 100.0 * (double(fatCalories)/double(calories));

	//Determine if low fat or high fat food
	if (percentageFat < 30.0)
		cout << "This is low fat food" << endl;
	else
		cout << "This is high fat food" << endl;
	return 0;
}

//Sample Output
//Enter the number of calories: 130
//Enter the number of fat grams: 5
//This is high fat food