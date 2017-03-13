#include <iostream>

using namespace std;

typedef struct
{
  float real;
  float imag;

  void read_complex()
  {
    cout << "Real and Imamginary:" << endl;
    cin >> real >> imag;
  }

  void write_complex()
  {
    cout << "The resultant complex number is : " << real << " + i " << imag << endl;
  }
} complex;

complex add_complex(complex *, complex *);

int main()
{
  int i, n;
  complex a, b, ans, arr[100];
  ans.real=0;
  ans.imag=0;
  //a.read_complex();
  //b.read_complex();
  cout << "enter number of complex numbers" << endl;
  cin >> n;
  for(i=0; i<n; i++)
  {
    (arr+i)->read_complex();
  }

  //ans=add_complex(&a, &b);
  for(i=0; i<n; i++)
  {
    ans = add_complex(&ans, (arr+i));
  }

  ans.write_complex();

  return 0;
}

complex add_complex(complex *x, complex *y)
{
  complex temp;
  temp.real=x->real+y->real;
  temp.imag=x->imag+y->imag;
  return temp;
}
