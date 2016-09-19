#include <iostream>
using namespace std;

/*
Program: IsVowl
Author: Tyler Timmins
Class: ITSE 1307 2002
Description: Write a value returning function that returns the value true if
a given character is a vowl otherwise returns false.
*/

//function prototypes
bool isVowl(char cVowl);

int main()
{
	//variables
	char cLetter;
	bool bTrueOrFalse;

	//ask input
	cout << "Enter a letter: ";
	cin >> cLetter;
	cout << endl;

	//upper thing
	cLetter = toupper(cLetter);

	//use function
	bTrueOrFalse = isVowl(cLetter);

	//output
	if (bTrueOrFalse == true)
		cout << "The letter is a vowl.";
	else
		cout << "The letter is not a vowl.";

	cout << endl;

	return 0;
}

bool isVowl(char cVowl)
{
	if (cVowl == 'A')
		return true;
	else if (cVowl == 'E')
		return true;
	else if (cVowl == 'I')
		return true;
	else if (cVowl == 'O')
		return true;
	else if (cVowl == 'U')
		return true;
	else if (cVowl == 'Y')
		return true;

	return false;
}