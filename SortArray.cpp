/*
 * SortArray.cpp
 *
 *  Created on: Sep 19, 2016
 *      Author: Juan
 */

//Sorting an array

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int n;
  cout << "enter array size n:" << endl;
  cin >> n;

  int a[n];

  cout << "enter numbers:" << endl;
  for(int i=0; i<n; i++)
  {
    cin >> a[i];
  }

  for(int j=0; j<n; j++) //for loop to anchor
  {
    for(int k=j+1; k<n; k++) //for loop to cycle through array
    {
      if(a[j] > a[k])
      {
        swap(a[j],a[k]); // swaps the location of two elements in the array
      }
    }

  }
  cout << "Here is the sorted Array";
  for(int l=0; l<n; l++)
  {
  	cout << " " << a[l] << " ";
  }

  return 0;
}



/*
 * swaps the location of two elements
 */

void swap(int a,int b) //swapping using call by value
{
	//hi
  int temp = b;
  b=a;
  a=temp;
}

/*
int swap1(int a,int b) //swapping using call by value
{
  int temp = b;
  b=a;
  a=temp;
  return 0;
}

int swap2(int *i, int *j) //swapping using call by reference
{
	int temp;
	temp=*i;
	*i = *j;
	*j = temp;
	return 0;
}

int main()
{
	int a=5;
	int b=6;

	cout << "A= " << a << " B= " << b << " before swap" << endl;

	swap(a,b);
	cout << "A= " << a << " B= " << b << " after swap using call by value" << endl;

	swap2(&a, &b);
	cout << "A= " << a << " B= " << b << " after swap using call by reference" << endl;
	return 0;
}
*/
