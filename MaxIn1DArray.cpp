/*
 * inClass3-1.cpp
 *
 *  Created on: Sep 19, 2016
 *      Author: Juan
 */

//to find max in array

#include <iostream>

using namespace std;

int main()
{
  //declare an array
  //int data[10]
  int n;

  cout << "Enter your n i.e. the size:";
  cin >> n;
  int data[n];

  cout << "Enter your numbers:" << endl;
  for (int i=0; i<n; i++)
  {
    cin >> data[i];
  }

  //find the max ----> Logic

  int max = data[0];
  for(int j=1; j<n; j++)
  {
    if (data[j] > max)
    {
      max=data[j];
    }
  }
  cout << "The max is: " << max << endl;
  return 0;
}
