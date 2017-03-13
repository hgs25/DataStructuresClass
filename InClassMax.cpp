/*
 * assignment1_ProgrammingInC++.cpp
 *
 *  Created on: Sep 16, 2016
 *      Author: Juan
 */
#include <iostream>
#include <cmath>

using namespace std;

//Objective: to find the max of n numbers

int main()
{
	int n;
	int max;
	int number;
	cout << "Enter the value of n :" << '\n';
	cin >> n;
	if (n>0)
	{
		int a [n]; //declare array
		cout << "Enter your numbers in sequence ... " << '\n';
		for (int i=0; i<n; i++)
		{
			cin >> a[i];
		}
		cin >> number;
		max = a[0];
		for (int i=1; i<n; i++)
		{
			cin >> number;
			if (a[i] > max)
			{
				max = a[i];
			}
		}
		cout << "---The maximum is ---- " << max << '\n';
		return max;
	}
	return 0;
}
