//Lab Exercise 1/23/2020 Problem 3
//Author: nmessa

#include <iostream>
using namespace std;

int main()
{
	//declare variables
	int iNumber;
	float fNumber;
	double dNumber;
	char ch;

	//Print report
	cout << "Integer takes " << sizeof(iNumber) << " bytes" << endl;
	cout << "Float takes " << sizeof(fNumber) << " bytes" << endl;
	cout << "Double takes " << sizeof(dNumber) << " bytes" << endl;
	cout << "Character takes " << sizeof(ch) << " bytes" << endl;
	return 0;
}

//Output
//Integer takes 4 bytes
//Float takes 4 bytes
//Double takes 8 bytes
//Character takes 1 bytes