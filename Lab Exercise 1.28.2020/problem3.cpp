//Lab Exercise 1/28/2020 Problem 3
//Author: nmessa

#include <iostream>
#include <string>
using namespace std;

int main()
{
	//Declare variables
	string name, age, city, college, profession, animal, petName;
	string story = "";
	string pSpacer, aSpacer;
	string vowels = "aeiouAEIOU";

	//Get information from user
	cout << "Enter name: ";
	cin >> name;
	cout << "Enter age: ";
	cin >> age;
	cout << "Enter city: ";
	cin >> city;
	cin.ignore();
	cout << "Enter college: ";
	getline(cin,college);
	cout << "Enter profession: ";
	getline(cin, profession);
	cout << "Enter animal: ";
	cin >> animal;
	cout << "Enter pet's name: ";
	cin >> petName;
	
	//Code to handle profession starting with a vowel
	if (vowels.find(profession[0]) != -1)
		pSpacer = "an ";
	else
		pSpacer = "a ";

	//Code to handle animal starting with a vowel
	if (vowels.find(animal[0]) != -1)
		aSpacer = "an ";
	else
		aSpacer = "a ";

	//Build the story
	story += "There once was a person named " + name 
		+ " who lived in " + city + ".  ";
	story += "At the age of " + age + ", " + name 
		+ " went to college at " + college + ".  ";
	story += name + " graduated and went to work as " + pSpacer 
		+ profession + ".  ";
	story += "Then " + name + " adopted " + aSpacer
		+ animal + " named " + petName + ".  ";
	story += "They both lived happily ever after.\n";
	

	//Output the story
	cout << endl << endl;
	cout << story;
	return 0;
}

/*Output
Enter name: Bill
Enter age: 18
Enter city: Exeter
Enter college: Harvard
Enter profession: philosopher
Enter animal: cat
Enter pet's name: Fido


There once was a person named Bill who lived in Exeter.  At the age of 18, Bill
went to college at Harvard.  Bill graduated and went to work as a philosopher.
Then Bill adopted a cat named Fido.  They both lived happily ever after.
*/