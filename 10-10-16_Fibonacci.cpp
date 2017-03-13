#include <iostream>
#include <cmath>

using namespace std;

Fib(int n)
{
  if(n==1)
    return 1;
  else if(n<=0)
    return 0;
  else
    return (Fib(n-1)+Fib(n-2));
}

int main()
{
  int n;
  cout << "enter the value for n: " << endl;
  cin >> n;
  cout << "Fib (" << n << ") is = " << Fib(n) << endl;
  return 0;
}
