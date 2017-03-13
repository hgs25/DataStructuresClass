#include <iostream>
#include <cmath>

using namespace std;

int merge(int a[], int i, int j)
{
  int k, n[100], mid, l, start;

  //intialize
  start = i;
  mid = (i+j)/2;
  k = mid+1;
  l=i;

  //for array a to b
  while (i <= mid && k <= j)
  {
    if(a[i] >= a[k])
      b[l++] = a[i++];
    else
      b[l++] = a[k++];
  }

  //sweep the remaining elements
  if(i>mid)
    while(k<=j)
    {
      b[l] = a[k];
      k++;
      l++;
    }
  else if(k>j)
    while(i<=mid)
    {
      b[l]=a[i];
      l++;
      i++;
    }
  
}

int myMergeSort(int a[], int i, int j)
{
  int mid;
  if(i>=j) //Base condiition
    return 0;
  else
  {
    mid = (i+j)/2;
    myMergeSort(a,i,mid);

  }
}

int main()
{
  //declaration of variables
  int dayta[100]={0}, i, j, n, temp;

  //input
  cout << "Give n: " << endl;
  cin >> n;
  cout << " Enter elements to be sorted: " << endl;
  for (i=0; i<n; i++)
    cin << data[i];


  //call
  myMergeSort(data, 0, n-1);

  //results
  cout << " Sorted numbers are: " << endl;
  for(i=0; i<n; i++)
    cout <<" " << data[i] << " ";
}
