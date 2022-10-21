//Write a program that read a positive integer num, and prints
//the number of digits in num and their sum.

#include <iostream>
using namespace std;
int analyzeDigs(int num, int& outSum);

int main()
{
	int num, countDigs, sumDigs;

	cout << "Please enter a positive integer: ";
	cin >> num;

	countDigs = analyzeDigs(num, sumDigs);

	cout << num << " has " << countDigs << " digits and their sum is " << sumDigs << endl;

	return 0;
}

int analyzeDigs(int num, int& outSum)
{
	int count, sum;
	int currDig;

	count = 0;
	sum = 0;
	while (num > 0)
	{
		currDig = num % 10;
		count++;
		sum += currDig;
		num = num / 10;
	}

	outSum = sum;
	return count;
}