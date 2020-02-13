//Lab Exercise 2/3/2020 Problem 3
//Author: nmessa

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Declare varaibles
	double f, c;

	//Set to fixed with 2 decimal place rounding
	cout << setprecision(2) << fixed;
	cout << "Fahrenheit\tCelsius" << endl;

	//Print Fahrenheit to Celsius conversion table
	for (f = 0.0; f <= 212.0; f += 1.0)
	{
		c = (5.0/9.0) * (f - 32.0);
		cout << f << "\t\t" << c << endl;
	}

	return 0;
}

//Output
//Fahrenheit      Celsius
//0.00            -17.78
//1.00            -17.22
//2.00            -16.67
//3.00            -16.11
//4.00            -15.56
//5.00            -15.00
//6.00            -14.44
//7.00            -13.89
//8.00            -13.33
//9.00            -12.78
//10.00           -12.22
//....
//208.00          97.78
//209.00          98.33
//210.00          98.89
//211.00          99.44
//212.00          100.00

