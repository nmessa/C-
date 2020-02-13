//Lab Exercise 2/6/2020 Problem 1
//Author: nmessa

#include <iostream>
using namespace std;

//Function prototypes
void getJudgeData(double &);
void calcScore(double, double, double, double, double);
double findLowest(double, double, double, double, double);
double findHighest(double, double, double, double, double);

int main()
{
	//Declare variables
	double score1, score2, score3, score4, score5;

	//Get data from 5 judges
	getJudgeData(score1);
	getJudgeData(score2);
	getJudgeData(score3);
	getJudgeData(score4);
	getJudgeData(score5);
	
	//Calculate and display the final score
	calcScore(score1, score2, score3, score4, score5);
	return 0;
}

//This function is given a reference parameter and updates it ensuring a valid score is entered
void getJudgeData(double &score)
{
	bool isValid = false;
	while (!isValid)
	{
		cout << "Enter score (1 - 10): ";
		cin >> score;
		if (score >= 0.0 && score <= 10.0)
			isValid = true;
	}
}

//This function is passed 5 scores and returns the average after throwing out the highest and lowest score
void calcScore(double s1, double s2, double s3, double s4, double s5)
{
	double total, average;
	total = s1 + s2 + s3 + s4 + s5;
	total -= findLowest(s1, s2, s3, s4, s5); //drop low score
	total -= findHighest(s1, s2, s3, s4, s5);	//drop high score
	average = total / 3.0;
	cout << "Average score = " << average << endl;
}

//This function is passed 5 scores and returns the lowest score
double findLowest(double s1, double s2, double s3, double s4, double s5)
{
	double min;
	if (s1 <= s2 && s1 <= s3 && s1 <= s4 && s1 <= s5)
		min = s1;
	if (s2 <= s1 && s2 <= s3 && s2 <= s4 && s2 <= s5)
		min = s2;
	if (s3 <= s1 && s3 <= s2 && s3 <= s4 && s3 <= s5)
		min = s3;
	if (s4 <= s1 && s4 <= s2 && s4 <= s3 && s4 <= s5)
		min = s4;
	if (s5 <= s1 && s5 <= s2 && s5 <= s3 && s5 <= s4)
		min = s5;
	return min;
}

//This function is passed 5 scores and returns the highest score
double findHighest(double s1, double s2, double s3, double s4, double s5)
{
	double max;
	if (s1 >= s2 && s1 >= s3 && s1 >= s4 && s1 >= s5)
		max = s1;
	if (s2 >= s1 && s2 >= s3 && s2 >= s4 && s2 >= s5)
		max = s2;
	if (s3 >= s1 && s3 >= s2 && s3 >= s4 && s3 >= s5)
		max = s3;
	if (s4 >= s1 && s4 >= s2 && s4 >= s3 && s4 >= s5)
		max = s4;
	if (s5 >= s1 && s5 >= s2 && s5 >= s3 && s5 >= s4)
		max = s5;
	return max;
}

//Sample Output
//Enter score (1 - 10): 8.7
//Enter score (1 - 10): 7.6
//Enter score (1 - 10): 9.9
//Enter score (1 - 10): 3.6
//Enter score (1 - 10): 8.8
//Average score = 8.36667