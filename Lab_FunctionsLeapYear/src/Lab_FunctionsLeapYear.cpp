//Write a function for determining if a year is a leap year in the Gregorian calendar.
//The system is to check if it is divisible by 4 but not by 100 unless it is also divisible
//by 400.
//
//For example, 1896, 1904, and 2000 were leap years but 1900 was not.
//Write a function that takes in a year as input and returns True if the year is a leap
//year, return False otherwise.
//
//Note: background on leap year https ://en.wikipedia.org/wiki/Leap_year
//
//The name of the function should be isleapyear and the function should take one parameter 
//which is the year to test.Here is an example call to the function
//
//	int mybirthyear = 2000
//
//	If(isleapyear(mybirthyear)) {
//
//		printf(“Year % i  was a leap year”, mybirthyear)
//
//	}
//
//File Name
//
//isleapyearf.cpp
//
//Function Signature
//
//bool isleapyear(int inyear);
//
//Score
//
//There are five tests each worth 2 points
//
//Note : You do not need any other code including the main method or any print statements.
//ONLY the isleapyear function is required.Otherwise, the autograder will failand be unable
//to grade your code. (I.e., do not include the above example in your code.) The above example 
//should be used to test your code but deleted or commented out upon submission.

#include <iostream>
using namespace std;

bool isleapyear(int inyear);

int main()
{
	cout << "Please enter inyear: ";
	int inyear{ 0 };

	cin >> inyear;
	if (isleapyear(inyear))
	{
		cout << "Year " << inyear << " is a leap inyear." << endl;
	}
	else
	{
		cout << "Year " << inyear << " is a common inyear." << endl;
	}
}

bool isleapyear(int inyear)
{
	if ((inyear % 4 == 0 && inyear % 100 != 0) || inyear % 400 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}