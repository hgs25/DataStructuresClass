/**
* Purpose : This program uses a tournament structure to sort an array in ascending order
*
* @author Juan Valenzuela
* @version 10.03.2016
*/

#include <iostream>
#include <cmath>

using namespace std;

/**
* purpose: compares two integers and returns the larger Value
*
* @param two integers
* @return the larger integer of the two inputted integers
*/
int maxi(int i, int j)
{
  if(i>j)
    return i;
  else
    return j;
}

/**
* purpose: compares two integers and returns the smaller Value
*
* @param two integers
* @return the smaller integer of the two inputted integers
*/
int mini(int i, int j)
{
  if(i<j)
    return i;
  else
    return j;
}

/**
* Purpose: builds the tournament structure with the array to find the smallest integer.
*
* @param the array the tournament structure will be implemented in and
         the number of integers in the given set.
* @returns the largest number in the set of integers in the array.
*/
int buildTourn(int tourn[], int n)
{
  int max = 0, a;
  //compute tournament structure
  for(int i=2*n-2; i>1; i=i-2 )
  {
    tourn[i/2] = mini(tourn[i], tourn[i+1]);
    a = maxi(tourn[i], tourn[i+1]);
    if(max < a)
      max = a;
  }
  return max;
}

/**
* purpose gets the next smallest integer in the array
*
* @param the array the tournament structure will be implemented in,
         the number of integers in the given set, and the highest known integer.
* @return 0
*/
int getNext(int tourn[], int n, int high)
{
  int i=2;
  //part 1 - downward traversal
  while(i<=2*n-1)
  {
    if(tourn[i]<tourn[i+1]) //sets the smaller int to be the highest number to show that it was used.
    {
      tourn[i] = high;
      i=2*i;
    }
    else
    {
      tourn[i+1]=high;
      i=2*(i+1);
    }
  }

  //part 2 - upward traversal
  for(i=i/2; i>1; i=i/2)
  {
    if(i%2 == 0)
      tourn[i/2] = mini(tourn[i],tourn[i+1]); //to the right of i
    else
      tourn[i/2] = mini(tourn[i],tourn[i-1]); //to the left of i
  }
  return 0;
}

int main()
{
  int tourn[100], n, i, high;
  //read
  cout << " Give n : ";
  cin >> n;
  cout << " Enter the integers to be sorted : ";
  for(i=n; i<=2*n-1; i++)
  {
    cin >> tourn[i];
  }

  //build tournament
  high = buildTourn(tourn, n)+1;

  //sorting
  cout << " Sorted items are : " << endl;
  for(i=1; i<=n; i++)
  {
    cout << tourn[1] << '\t';
    getNext(tourn, n, high);
  }

  cout << '\n';
  return 0;
}
