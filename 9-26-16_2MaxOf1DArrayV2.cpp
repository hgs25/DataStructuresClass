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
  int n, m, max, nextMax, index, num;
  cout << "enter the number of integers (n): " << endl;
  cin >> n;
  index = n*2-1;
  int arr[index];
  cout << "Enter the n integers in set : " << endl;
  for(int i=n-1; i<index; i++)
  {
    cin >> arr[i];
  }

  //logic
  for(int i=index-1; i>=0; i-2)
  {
    if(i <= i-1)
    {
      arr[(i-1)/2] = arr[i];
    }
    else
    {
      arr[(i-1)/2] = arr[i-1];
    }
  }
  max = get.arr[0];
  nextMax = get.arr[1];
  cout << "The Max = " << max << " and the Next Max = " << nextMax << endl;
  return 0;
}
