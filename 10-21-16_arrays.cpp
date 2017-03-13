#include <iostream>

using namespace std;

int main()
{
  int i, j, n, m, arr1[10], arr2[10][10];

  cout << "give n amd m" << endl;
  cin >> n >> m;

  cout << "Enter contents of array" << endl;
  for (i=0; i<n; i++)
    cin >> *(arr1+i);

  cout << "The address of first element is " << arr1 << endl;
  cout << "The address of the 2nd element is " << arr1+1 << endl;
  cout << "The content of the 2nd element is " << *(arr1+1) << endl;

  cout << "enter contents of 2d array" << endl;
  for (i=0; i<n; i++)
    for (j=0; j<m; j++)
      cin >> *(*(arr2+i)+j);

  cout << "The address of first element is " << arr2 << endl;
  cout << "The address of the 1st element of the second row is " << arr2+1 << endl;
  cout << "The address of the 2nd element of the second row is " << *(arr2+1)+1 << endl;
  cout << "The content of the 2nd element of the second row is " << *(*(arr2+1)+1) << endl;
  return 0;
}
