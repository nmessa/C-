//Lab Exercise 2.12.2020 Problem 2
//Author: nmessa

#include <iostream>
#include <iomanip>
using namespace std;

//Function prototypes
int numEmployees();
int daysAbsent(int);
double averageAbsence(int, int);

int main()
{
	//Declare variables
	int employees, days;
	double absence;

	//Get the number of employees
	employees = numEmployees();

	//Get the number of absences
	days = daysAbsent(employees);

	//Get the anverage number of absences an employ has
	absence = averageAbsence(employees, days);

	//Output a report
	cout << "Employees: " << employees << endl;
	cout << "Absences: " << days << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "Absence rate = " << absence << " days per employee" << endl;
	return 0;
}

//This function returns the number of employees
int numEmployees()
{
	int emps;
	cout << "Enter number of employees: ";
	cin >> emps;
	return emps;
}

//This function is passed the number of employtees and returns the total number of days 
//all employees were absent
int daysAbsent(int emps)
{
	int absences = 0;
	int temp;
	for (int i = 1; i <= emps; i++)
	{
		cout << "Absences for employee " << i << ": ";
		cin >> temp;
		absences += temp;
	}
	return absences;
}

//This function is pased the number of employes and absenses and calculates and returns 
//the average number of days each employee was absent
double averageAbsence(int e, int d)
{
	return double(d)/double(e);
}

//Sample Output
//Enter number of employees: 3
//Absences for employee 1: 5
//Absences for employee 2: 3
//Absences for employee 3: 1
//Employees: 3
//Absences: 9
//Absence rate = 3.00 days per employee