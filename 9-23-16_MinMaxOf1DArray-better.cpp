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

int maxi(int arr[], int max, int index)
{
  for(int i=1; i<index; i++)
  {
    if(max < arr[i])
    {
      max = arr[i];
    }
  }
  return max;
}

int mini(int arr[], int min, int index)
{
  for(int i=1; i<index; i++)
  {
    if(min > arr[i])
    {
      min = arr[i];
    }
  }
  return min;
}

int main()
{
  //declare all variables
  int n, m, max, min, i, num1, num2;
  int large[100], small[100], index1=1, index2=1;

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

//filling in arrays large and small
  for(i=1; i<=m/2; i++)
  {
    cin >> num1 >> num2;
    if(num1 >= num2)
    {
      large[index1] = num1;
      index1++;
      small[index2] = num2;
      index2++;
    }
    else
    {
      large[index1++]=num2;
      small[index2++]=num1;
    }
  }

  cout << "MAX = " << maxi(large, max, index1) << " MIN = " << mini(small, min, index2);

  return 0;
}
