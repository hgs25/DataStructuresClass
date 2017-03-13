#include <iostream>
#include <cmath>

using namespace std;

void swap(int *a, int *b)
{
  int temp = *b;
  *b = *a;
  *a = temp;
}

int min(int arr[], int n)
{
  int min = *(arr), minIndex=0;
  for (int i=1; i<n; i++)
  {
    if(*(arr+i) < min)
    {
      min = *(arr+i);
      minIndex = i;
    }
  }
  return minIndex;
}

int sortIterative(int arr[], int n)
{
  int min, i, j;
  for(i=0; i<n-1; i++)
  {
    min = i;
    for(j=i+1; j<n; j++)
    {
      if(*(arr+j) <= *(arr+min))
        min = j;
    }
    if(min!= i)
      swap(arr+min, arr+i);
  }
}

int sortRecursive(int arr[], int n)
{
  if (n<=1)
  {
    return 0;
  }
  else
  {
    //int min = min(arr, n);
    swap(arr+min(arr, n), arr+(n-1));
    //swap(arr[min(arr, n)], arr[n-1]);
    sortRecursive(arr, n-1);
  }
  return 0;
}

int main()
{
  int arr[100], arr2[100], n, i, temp;

  cout << "input size of array" << endl;
  cin >> n;
  cout << "input contents of array" << endl;
  for (i=0; i<n; i++)
  {
    cin >> temp;
    arr[i] = temp;
    arr2[i] = temp;
  }

  sortRecursive(arr, n);
  sortIterative(arr2, n);

  cout << "Recursive sort" << endl;
  for(i=0; i<n; i++)
    cout << "| " << *(arr+i) << " |";

  cout << endl;
  cout << "Iterative sort" << endl;
  for(i=0; i<n; i++)
    cout << "| " << *(arr2+i) << " |";
  return 0;
}
