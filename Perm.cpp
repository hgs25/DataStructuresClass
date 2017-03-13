#include <iostream>
#include <string>

using namespace std;

void del_list(char L[], int i, int n, char New[])
{
  int j;
  for(j=0; j<i; j++)
  {
    New[j] = L[j];
  }
  for(j=i; j<n-1; j++)
  {
    New[j] = L[j+1];
  }
}

int permut(char list[], int n, int r, char perm[], int m)
{
  int i;
  char newList[20];
  if (r==0)
  {
    perm[m] = '\0';
    cout << perm << '\t';
    return 0;
  }
  else
  {
    for (i=0; i<n; i++)
    {
      perm[m] = list[i];
      del_list(list, i, n, newList);
      permut(newList, n-1, r-1, perm, m+1);
    }
    return 0;
  }
}

int main()
{
  char list[50] = {0}, perm[50] = {0};
  int n, r;
  cout << "Give n and r : "<< endl;
  cin >> n >> r;
  cout << "give the characters as a string" << endl;
  cin >> list;
  cout << "The list is : " << list << endl;
  permut(list, n, r, perm, 0);
  cout << endl;
  return 0;
}
