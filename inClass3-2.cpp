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

  for(i=0; i<n; i++)
  {
    cin >> a[i];
  }

  for(j=0; j<n; j++) //for loop to anchor
  {
    for(k=j+1; k<n; k++) //for loop to cycle through array
    {
      if(a[j] > a[k])
      {
        swap(a[j],a[k]);
      }
    }
  }
}

void swap(a,b)
{
  int temp = b;
  b=a;
  a=b;
}
