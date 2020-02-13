//Lab Exercise 2/14/2020 Problem 1
//Author: nmessa

#include <iostream>
#include <string>
using namespace std;

//Structure definition
struct MovieData
{
	//Structure members
	string title, director;
	int year, runningTime;

	//Constructor
	MovieData(string t, string d, int y, int rt)
	{
		title = t;
		director = d;
		year = y;
		runningTime = rt;
	}

	//Function to display movie information
	void displayMovie()
	{
		int hh;
		int mm;
		hoursMinutes(hh, mm, runningTime);  //passed as reference parameters
		cout << "Title: " << title << endl;
		cout << "Director: " << director << endl;
		cout << "Year released: " << year << endl;
		cout << "Running time: " << hh << ":" << mm << endl;
	}

	//This function calculates hours and minutes given the running time in minutes and
	//stores them in reference parameters
	void hoursMinutes(int &hh, int &mm, int rt)
	{
		hh = runningTime / 60;
		mm = runningTime % 60;
	}

};

int main()
{
	//Create 2 MovieData structure variables and initialize them
	MovieData firstMovie("The Terminator", "James Cameron", 1984, 107);
	MovieData secondMovie("Shaft", "Gordon Parks", 1971, 100);

	//Display the two movies
	firstMovie.displayMovie();
	cout << endl;
	secondMovie.displayMovie();
	return 0;
}

//Output
//Title: The Terminator
//Director: James Cameron
//Year released: 1984
//Running time: 1:47
//
//Title: Shaft
//Director: Gordon Parks
//Year released: 1971
//Running time: 1:40