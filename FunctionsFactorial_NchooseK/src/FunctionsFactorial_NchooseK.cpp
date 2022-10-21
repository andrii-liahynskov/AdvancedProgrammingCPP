//Lection "functions" - exercise: number of k combinations or n choose k.
//Create a function to calculate the factorial of the integer

#include <iostream>
using namespace std;

int kCombination(int n, int k);
int factorial(int num);

int main()
{
	int n, k, k_comb;
	cout << "Please enter n and k (n>=k): ";
	cin >> n >> k;

	k_comb = kCombination(n, k);

	cout << n << " choose " << k << " is ";
	cout << k_comb << endl;

	return 0;
}

int kCombination(int n, int k)
{
	int nFact, kFact, n_kFact;
	nFact = factorial(n);
	kFact = factorial(k);
	n_kFact = factorial(n - k);
	return nFact / (kFact * n_kFact);
}

int factorial(int num)
{
	int factRes, i;
	factRes = 1;
	for (i = 1; i <= num; ++i)
	{
		factRes *= i;
	}
	return factRes;
}