#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int n1;
  int n2;
  cout << "input the two numbers to find the GCD of:";
  cin >> n1 >> n2;

  int inpl;
  int inps;
  int rem;

  if(n1>n2)
  {
    inpl = n1;
    inps = n2;
  }
  else
  {
    inpl = n2;
    inps = n1;
  }

  while(inpl % inps != 0)
  {
    rem = inpl % inps;
    if (rem != 0)
    {
      inpl = inps;
      inps = rem;
    }
  }
  cout << inps;
  return inps;
}
