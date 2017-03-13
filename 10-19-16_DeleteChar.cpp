#include <iostream>
#include <String>

using namespace std;

void Delist(string str2[], int n, int r, char temp[])
{
  int count = 0;
  for (int i=0; i<r; i++)
  {
    temp[count++] = str2[i];
  }
  for(int j=r+1; j<n; j++)
  {
    temp[count++] = str2[j];
  {
    cout << endl;
}

int main()
{
  //string n;
  int n;
  char str[100]={0};
  char nstr[100]={0};
  int r;
  cout << "Enter the string size :" << endl;
  cin >> n;
  cout << "enter the location of the character to delete : " << endl;
  cin >> r;
  cout << "Enter the string :" << endl;
  cin >> str;

  cout << "The entered string is : " << str << endl;

  cout << "The first character in the string is :" << str[0] << endl;
  cout << "The last character in the string is :" << str[n] << endl;
  cout << "The last character ASCII equivalent is:" << int(str[n]) << endl;

  Delist(str, n, r, nstr);
  cout << "The current string is : " << nstr << endl;
  return 0;
}
