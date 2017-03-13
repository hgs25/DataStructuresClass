#include <iostream>
#include <cmath>

using namespace std;

int maxi(int a, int b)
{
  if(a>b)
    return a;
  else
    return b;
}

void buildTourn(int tourn[], int n)
{
  //complete tournament structure
  for(int i=2*n-2; i>1; i=i-2)
  {
    tourn[i/2] = maxi(tourn[i], tourn[i+1]);
  }
}

int nextMax(int tourn[], int n)
{
  //initiallize my variables
  int nextIndex=2, nextMax=0;

  //downward traversal
  while(nextIndex <= 2*n-1)
  {
    if(tourn[nextIndex] > tourn[nextIndex+1])
    {
      nextMax = maxi(tourn[nextIndex+1], nextMax);
      nextIndex = 2*(nextIndex);
    }
    else
    {
      nextMax = maxi(tourn[nextIndex], nextMax);
      nextIndex = 2*(nextIndex+1);
    }
  }
  return nextMax;
}

int main()
{
  int t[100], i, n, m;

  cout << " Enter the number of integers : ";
  cin >> n;
  cout << " Enter the integers : " << endl;
  for(i=n; i<=(2*n-1); i++)
  {
    cin >> t[i];
  }

  buildTourn(t, n);

  cout << "Max: " << t[1] << " nextMax: " <<   nextMax(t, n);

  return 0;
}
