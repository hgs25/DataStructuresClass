/*
*finds the maximum and minimum of a given set of numbers efficiently
*
*author Juan Valenzuela
*version 09.25.16
*/

#include <iostream>
#include <cmath>

using namespace std;
//find min/max of an array

int swap(int *e1, int *e2)
{
  int *temp;
  temp = e2;
  e2=e1;
  e1=temp;
  return 0;
}

int main()
{
  //declare all variables
  int n, m, max, min, i, num1, num2;

  //initialize variables
  cout << "Enter the number of numbers in the list (n) : " << endl;
  cin >> n;
  cout << "Enter the numbers in the list : " << endl;
  cin >> max;
  min = max;
  m = n-1;
  if(n%2==0)
  {
    cin >> min;
    if(max < min)
    {
      swap(&max, &min);
      m=m-1;
    }
  }

//calculating max/min
  for(i=1; i<=m/2; i++)
  {
    cin >> num1 >> num2;
    if(num1 < num2)
    {
      swap(&num1, &num2)
    }
    if (num1 > max)
    {
      max = num1;
    }

    if(num2 < min)
    {
      min = num2;
    }
  }

  cout << "MAX = " << max << " MIN = " << min;

  return 0;
}
