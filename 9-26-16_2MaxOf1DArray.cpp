#include <iostream>
#include <cmath>

using namespace std;

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
  //declare variables
  int n, m, max, nextMax, i, num;
  cout << "enter the number of integers (n): " << endl;
  cin >> n;
  cout << "Enter the n integers in set : " << endl;
  cin >> max >> nextMax;
  if(max < nextMax)
  {
    swap(&max, &nextMax);
  }

  //logic
  for(i=1; i<=n-2; i++)
  {
    cin >> num;
    if(num > max)
    {
      nextMax = max;
      max = num;
    }
    else if(num > nextMax)
    {
      nextMax = num;
    }
  }
  cout << "The Max = " << max << " and the Next Max = " << nextMax << endl;
  return 0;
}
