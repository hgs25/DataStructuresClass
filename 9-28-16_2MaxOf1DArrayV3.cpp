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

int mini(int a, int b)
{
  if(a<b)
    return a;
  else
    return b;
}

int main()
{
  int t[100], i, n, m, nextMax =0, nextIndex = 2;

  cout << " Enter the number of integers : ";
  cin >> n;
  cout << " Enter the integers : " << endl;
  for(i=n; i<=(2*n-1); i++)
  {
    cin >> t[i];
  }
  //compute tournament
  for(i=(2*n-2); i>1; i=i-2)
  {
    t[i/2]=maxi(t[i], t[i+1]);
  }
  //display tournament
  cout << endl; //gap between input and tournament
  for(i=1; i<=(2*n-1); i++)
  {
    cout << t[i] << endl;
  }

  //display maxes
  cout << "How many maximums do you wish to print?";
  cin >> m;

  i=1;
  if(m>=1)
  {
    cout << "max1 = " << t[1] << endl;

    for(int j=2; j<=m; j++)
    {
      nextMax = mini(t[nextIndex], t[nextIndex+1]);
      if(t[nextIndex] < t[nextIndex+1])
      {
        nextIndex++;
      }
      cout<< "max" << j << " = " << nextMax << endl;
      nextIndex *= 2;
    }
  }
  return 0;
}
