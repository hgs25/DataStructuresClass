#include(iostream)
#include(cmath)

using namespace std

void partition(int a[], int i, int j, int *k)
{
  int b[100] = {0}, pivot, q, m, n, count;
  pivot = a[i];
  m = i+1;
  n=j;
  count = 0;

  for(q=i+1; q<=j, q++)
  {
    if(a[q]>=pivot)
    {
      b[m++] = a[q];
      count++;
    }
    else
    {
      b[n--] = a[q];
    }
  }

  b[i]=b[i+count];
  b[i+count] = pivot;
  *k=i+count;

  for(q=i; q<= j; q++)
    a[q]=b[q]
}

int myQSort(int a[], int i, int j)
{
  int k; //to indicate where the array is positioned

  if (i>=j)
    return 0;
  else
  {
    partition (a, i, j, &k);

  }
}

int main()
{
  //declaration of variables
  int data[100]={0}, i, j, n,temp;

  //input
  cout << "give n: " << endl;
  cin >> n;
  cout << "Enter elements to be sorted : " << endl;
  for(i=0; i<n; i++)
    cin >> data[i];

  cout << "the numbers read are: " << endl;
  for (i=0; i<n; i++)

}
