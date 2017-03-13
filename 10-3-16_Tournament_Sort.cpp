#include <iostream>
#include <cmath>

using namespace std;

int maxi(int i, int j)
{
  if(i>j)
    return i;
  else
    return j;
}

int mini(int i, int j)
{
  if(i<j)
    return i;
  else
    return j;
}

int buildTourn(int tourn[], int n)
{
  int min = 0, a;
  //compute tournament structure
  for(int i=2*n-2; i>1; i=i-2 )
  {
    tourn[i/2] = maxi(tourn[i], tourn[i+1]);
    a = mini(tourn[i], tourn[i+1]);
    if(min > a)
      min = a;
  }
  return min;
}

int getNext(int tourn[], int n, int low)
{
  int i=2;
  //part 1 - downward traversal
  while(i<=2*n-1)
  {
    if(tourn[i]>tourn[i+1])
    {
      tourn[i] = low;
      i=2*i;
    }
    else
    {
      tourn[i+1]=low;
      i=2*(i+1);
    }
  }

  //part 2 - upward traversal
  for(i=i/2; i>1; i=i/2)
  {
    if(i%2 == 0)
      tourn[i/2] = maxi(tourn[i],tourn[i+1]); //to the right of i
    else
      tourn[i/2] = maxi(tourn[i],tourn[i-1]); //to the left of i
  }
  return 0;
}

int main()
{
  int tourn[100], n, i, low;
  //read
  cout << " Give n : ";
  cin >> n;
  cout << " Enter the integers to be sorted : ";
  for(i=n; i<=2*n-1; i++)
  {
    cin >> tourn[i];
  }

  //build tournament
  low = buildTourn(tourn, n)-1;

  //sorting
  cout << " Sorted items are : " << endl;
  for(i=1; i<=n; i++)
  {
    cout << tourn[1] << '\t';
    getNext(tourn, n, low);
  }

  cout << '\n';
  return 0;
}
