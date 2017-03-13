/*
 * factorial.cpp
 *
 *  Created on: Sep 22, 2016
 *      Author: Juan
 */

#include <iostream>
#include <cmath>

using namespace std;

int iterative(int n)
{
	int factorial = 1;
	for (n; n>1; n--)
	{
		factorial = factorial * n;
	}
	return factorial;
}

int fact(int n)
{
	if(n<=1)
	{
		return 1;
	}

	else
	{
		return(n*fact(n-1));
	}
}

int main()
{
	int n;
	cout << "input number n:" << endl;
	cin >> n;

//	cout << fact(n) << endl;
	cout << iterative(n) << endl;
}

