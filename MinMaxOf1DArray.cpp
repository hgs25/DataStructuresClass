/*
 * MinMaxOf1DArray.cpp
 *
 *  Created on: Sep 21, 2016
 *      Author: Juan
 */

#include <iostream>
#include <cmath>

using namespace std;

int iterative(int length, int *min, int *max, int L[]);
int recursive(int i, int length, int *min, int *max, int L[]);

int main()
{
	int length;
	cout << "Input length of Array L:" << endl;
	cin >> length;
	int L[length];

	cout << "input numbers for array:" << endl;
	for(int i=0; i<length; i++)
	{
		cin >> L[i];
	}
	int max = L[0];
	int min = L[0];

	iterative(length, &min, &max, L);
	cout << "The Maximum value is " << max << ". The minimum value is " << min;
	max = L[0];
	min = L[0];
	recursive(1,length, &min, &max, L);
	cout << "The Maximum value is " << max << ". The minimum value is " << min;
}

int iterative(int length, int *min, int *max, int L[])
{


	for(int i=1; i<length; i++)
	{
		if(*max < L[i])
		{
			*max = L[i];
		}
		if(*min > L[i])
		{
			*min = L[i];
		}
	}

	return 0;
}


int recursive(int i, int length, int *min, int *max, int L[])
{
	if(i >= length)
	{
		return 0;
	}
	else
	{
		if(*max < L[i])
		{
			*max = L[i];
		}
		if(*min > L[i])
		{
			*min = L[i];
		}
		return(recursive(i+1, length, min, max, L));
	}
}

