//Lab Exercise 1/27/2020 Problem 4
//Author: nmessa

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Declare variables
	double principle, rate, mRate, payment, amountPaid, interestPaid;
	int years, months;

	//Get user input
	cout << "Enter the loan amount: ";
	cin >> principle;
	cout << "Enter the interest rate (%): ";
	cin >> rate;
	cout << "Enter the loan duration (years): ";
	cin >> years;
	cout << "\n\n\n";

	//Calculate values
	months = 12 * years;
	mRate = rate / 12.0 / 100.0; //convert to monthly interest rate
	payment = principle * (mRate * pow(1 + mRate, months))/
		(pow(1 + mRate, months) - 1);
	amountPaid = payment * months;
	interestPaid = amountPaid - principle;

	//Output report
	cout << setprecision(2) << fixed;
	cout << "Loan Amount:\t\t$" << principle << endl;
	cout << "Interest Rate:\t\t" << rate << "%" << endl;
	cout << "Years of Loan:\t\t" << years << endl;
	cout << "Monthly Payment:\t$" << payment << endl;
	cout << "Amount Paid Back:\t$" << amountPaid << endl;
	cout << "Interest Paid:\t\t$" << interestPaid << endl;

	return 0;
}

//Output
//Enter the loan amount: 10000
//Enter the interest rate (%): 12
//Enter the loan duration (years): 3



//Loan Amount:            $10000.00
//Interest Rate:          12.00%
//Years of Loan:          3
//Monthly Payment:        $332.14
//Amount Paid Back:       $11957.15
//Interest Paid:          $1957.15