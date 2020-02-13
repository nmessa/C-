//Lab Exercise 2/12/2020 Problem 1
//Author: nmessa

#include <iostream>
using namespace std;

//Function prototypes
void getValues(int &, int &, int &, int &, int &);
int findLowest(int, int, int, int, int);
double calcAverage(int, int, int, int, int);

int main()
{
	//Declare variables
	int score1, score2, score3, score4, score5;
	double average;

	//get the value of 5 test scores using reference parameters
	getValues(score1, score2, score3, score4, score5);

	//get the average of the 5 test scores passed as value parameters
	average = calcAverage(score1, score2, score3, score4, score5);

	//Output the results
	cout << "Average = " << average << endl;
	return 0;
}

//This function is passed 5 test scores as reference parameters and gets their values
//from the user
void getValues(int &s1, int &s2, int &s3, int &s4, int &s5)
{
	cout << "Enter score: ";
	cin >> s1;
	cout << "Enter score: ";
	cin >> s2;
	cout << "Enter score: ";
	cin >> s3;
	cout << "Enter score: ";
	cin >> s4;
	cout << "Enter score: ";
	cin >> s5;
}

//This function is passed 5 test scores as value parameters and returns the smallest one
int findLowest(int s1, int s2, int s3, int s4, int s5)
{
	int min = s1;
	if (s2 < min)
		min = s2;
	if (s3 < min)
		min = s3;
	if (s4 < min)
		min = s4;
	if (s5 < min)
		min = s5;
	return min;
}

//This function is passed 5 test scores as value parameters and returns the average of them minus the smallest one
double calcAverage(int s1, int s2, int s3, int s4, int s5)
{
	int total;
	total = s1 + s2 + s3 + s4 + s5;
	total -= findLowest(s1, s2, s3, s4, s5);
	return total / 4.0;
}

//Output
//Enter score: 70
//Enter score: 50
//Enter score: 60
//Enter score: 70
//Enter score: 60
//Average = 65