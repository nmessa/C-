//Lab Exercise 2/6/2020 Problem 2
//Author: nmessa

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Define constants
#define R1 0.8
#define R2 0.95
#define NUMTRIALS 5000

//Function prototype
bool testComponent(double);

int main()
{
	//Declare varaiables
	bool c1Fail, c2Fail, c3Fail, c4Fail;
	int numFails = 0;

	srand(time(0));	//Initialize random number generator

	//Run simulations
	for (int i = 1; i <= NUMTRIALS; i++)
	{
		//Initialize flags
		c1Fail = false; 
		c2Fail = false;
		c3Fail = false;
		c4Fail = false;

		//Test each component with it's reliability value
		c1Fail = testComponent(R1);
		c2Fail = testComponent(R1);
		c3Fail = testComponent(R2);
		c4Fail = testComponent(R2);

		//Check for critical failures
		if (c1Fail && c3Fail || c1Fail && c4Fail || c2Fail && c3Fail || c2Fail && c4Fail)
		{
			numFails++;  //update failure count
		}
	}

	cout << "Failure rate = " << (1.0 * numFails / NUMTRIALS) * 100 << "%" << endl;
	return 0;
}

//This function is passed a reliability value and returns true if component failed
bool testComponent(double reliability)
{
	double rNumber;
	rNumber = rand() % 1000 / 1000.0; //generate a number from 0 to 1
	if (rNumber > reliability)
		return true;
	else
		return false;
}

//Output
//Failure rate = 3.52%

