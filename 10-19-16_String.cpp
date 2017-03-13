#include <iostream>
#include <String>

using namespace std;

int main()
{
  string n;
  cout << "Enter the string" << endl;
  cin >> n;
  cout << "The entered string is : " << n << endl;

  cout << "The first character in the string is :" << n[0] << endl;
  cout << "The last character in the string is :" << n[n.length()-1] << endl; 
}
