/*
 * CSC220-HW1.cpp
 *
 *  Created on: Sep 17, 2016
 *      Author: Juan
 */

#include <iostream>
#include <cmath>

using namespace std;

//multiply two matrices.

int main()
{
	int aRow; //# of rows and array a
	int aCol; //# of columns in array a
	int bRow; //# of rows and array b
	int bCol; //# of columns and array b

	cout << "Enter the # of rows in Array A:" << endl;
	cin >> aRow;

	cout << "Enter the # of columns in Array A:" << endl;
	cin >> aCol;

	cout << "Enter the # of rows in Array B:" << endl;
	cin >> bRow;

	cout << "Enter the # of columns in Array B:" << endl;
	cin >> bCol;

	if(aCol != bRow)
	{
		cout << "Error: answer is undefined. The # of columns in array A and the # of rows in array B must be equal.";
		return 0;
	}

	int a[aRow][aCol];
	int b[bRow][bCol];
	int sol[aRow][bCol]; //solution matrix : same number of rows as A and same # of columns as B.

	cout << "Enter the numbers for matrix A:" << endl;
	for(int i=0; i<aRow; i++)
	{
		for(int j=0; j<aCol; j++) //iterate through row
		{
			cin >> a[i][j];
		}
	}

	cout << "Enter the numbers for matrix B:" << endl;
	for(int i=0; i<bRow; i++)
	{
		for(int j=0; j<bCol; j++) //iterate through row
		{
			cin >> b[i][j];
		}
	}

	for(int i=0; i<aRow; i++) //going through sol matrix
	{
		for(int j=0; j<bCol; j++)
		{
			int sum=0;

			for(int k=0; k<aCol; k++) //aCol == bRow
			{
				sum = sum + (a[i][k]*b[k][j]); //in array a, only aCol changes, in array b, only bROw changes
			}

			sol[i][j] = sum;
		}
	}
	 cout << "solution matrix" << endl;
	for(int i=0; i<aRow; i++)
	{
		for(int j=0; j<bCol; j++)
		{
			cout << " | " << sol[i][j] << " | ";
		}
		cout << endl;
	}

	return 0;
}
