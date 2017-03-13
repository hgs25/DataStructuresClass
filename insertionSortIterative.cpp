#include <iostream>
#include <cmath>

using namespace std;

void swap(int *a, int *b)
{
  int temp = *b;
  *b = *a;
  *a = temp;
}

int selectionSort(int arr[], int n)
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
    if(min!=i)
      swap(arr+min, arr+i);
  }
}

int main()
{
  int arr[100], n, i;

  cout << "input size of array" << endl;
  cin >> n;
  cout << "input contents of array" << endl;
  for (i=0; i<n; i++)
    cin >> arr[i];

  selectionSort(arr, n);

  for(i=0; i<n; i++)
    cout << "| " << *(arr+i) << " |";
  return 0;
}
