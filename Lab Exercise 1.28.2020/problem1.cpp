//Lab Exercise 1/28/2020 Problem 1
//Author: nmessa

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Declare variables
	double half, third, quarter, fifth, sixth, seventh;
	double sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0, sum6 = 0, sum7 = 0;

	//Calculate fractions (1/2 to 1/7)
	half = 1.0/2;
	third = 1.0/3;
	quarter = 1.0/4;
	fifth = 1.0/5;
	sixth = 1.0/6;
	seventh = 1.0/7;

	//Setup formatting to fixed 20 decimal places
	cout << setprecision(20) << fixed;

	//Output fraction values
	cout << "1/2 = " << half << endl;
	cout << "1/3 = " << third << endl;
	cout << "1/4 = " << quarter << endl;
	cout << "1/5 = " << fifth << endl;
	cout << "1/6 = " << sixth << endl;
	cout << "1/7 = " << seventh << endl << endl;

	//add fractions to sums 840 times
	for (int i = 1; i <= 840; i++)
	{
		sum2 += half;
		sum3 += third;
		sum4 += quarter;
		sum5 += fifth;
		sum6 += sixth;
		sum7 += seventh;
	}

	//Output the sums
	cout << "1/2 summed 840 times = " << sum2 << endl;
	cout << "1/3 summed 840 times = " << sum3 << endl;
	cout << "1/4 summed 840 times = " << sum4 << endl;
	cout << "1/5 summed 840 times = " << sum5 << endl;
	cout << "1/6 summed 840 times = " << sum6 << endl;
	cout << "1/7 summed 840 times = " << sum7 << endl;

	return 0;
}

/* Output
1/2 = 0.500000000000000
1/3 = 0.333333333333333
1/4 = 0.250000000000000
1/5 = 0.200000000000000
1/6 = 0.166666666666667
1/7 = 0.142857142857143

1/2 summed 840 times = 420.000000000000000
1/3 summed 840 times = 280.000000000001530
1/4 summed 840 times = 210.000000000000000
1/5 summed 840 times = 167.999999999999010
1/6 summed 840 times = 140.000000000000770
1/7 summed 840 times = 119.999999999999010
*/