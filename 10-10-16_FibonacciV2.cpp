#include <iostream>
#include <cmath>

using namespace std;

Fib(int n, int i)
{
  if(i==1 && n==1)
    cout << 1 << '\t';
  if (n==1)
    return 1;
  if(n<1)
    return 0;
  else
  {
    int x = Fib(n-1,i);
    int y = Fib(n-2,0);
    if(i!=0)
      cout << x+y << ""\n";
    return (x+y)
  }
}
