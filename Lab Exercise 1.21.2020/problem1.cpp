//Lab Exercise 1.21.2020 Problem 1
//Author: nmessa

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	//Declare variables
	double x = 3, f1, f2, f3;

	//Assign expressions and evaluate
	f1 = 1.2*x*x*x - 7.6*x*x + 12.7*x -8;
	f2 = 2.7*pow(x,4) -9.2*pow(x,3) + 14.7*x - 4.9;
	f3 = 2.9*pow(x,5) -21.7*pow(x, 3) + 9.8*x - 17.3;

	//Output results
	cout << "function 1 evaluates as " << f1 << endl;
	cout << "function 2 evaluates as " << f2 << endl;
	cout << "function 2 evaluates as " << f3 << endl;
	return  0;
}

//Output
//function 1 evaluates as -5.9
//function 2 evaluates as 9.5
//function 2 evaluates as 130.9