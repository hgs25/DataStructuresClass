#include <iostream>

using namespace std;

void ListTowers(int n, char from, char to, char via)
{
  if (n==1)
    cout << "<" << from << " , " << to << ">" << endl;
  else
  {
    ListTowers(n-1, from, via, to);
    ListTowers(1, from, to, via);
    ListTowers(n-1, via, to, from);
  }
}

int main()
{
  int n;
  cout << "input number of disks" << endl;
  cin >> n;
  ListTowers(n, 'A', 'B', 'C');
  return 0;
}
