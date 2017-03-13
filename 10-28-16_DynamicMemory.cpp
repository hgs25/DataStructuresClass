#include <iostream>
using namespace std;

int MAXSIZE = 10;

typedef struct
{
  float real;
  float imag;

  void read_complex()
  {
    cout << "Real and Imaginary:" << endl;
    cin >> real >> imag;
  }

  void write_complex()
  {
    cout << "The resultant complex number is : " << real << " + i " << imag << endl;
  }
} complex;

int main()
{
  //int *p(nullptr);
  //int *p1(nullptr);
  int *p, *p1;
  int n, n1;

  complex *p2, *p3;

  p = new int;
  p1 = new int[MAXSIZE];
  p2 = new complex;
  p3 = new complex[MAXSIZE];

  cout << "The value of p is " << *p << " stored at address location in HEAP :" << p << endl;
  cout << "enter the value of n" << endl;
  cin >> n;
  *p = n;
  cout << "The vlaue of p is " << *p << " stored at address location in HEAP : " << p << endl;
  cout << "the value of n is " << n << " stored at address location in STACK :" << &n << endl;
  delete p;

  cout << "The value of p1 is " << *p1 << " stored at address location in HEAP :" << p1 << endl;
  cout << "enter the value of n1 < than " << MAXSIZE << endl;
  cin >> n1;
  cout << "enter numbers: " << endl;
  for (int i=0; i<n1; i++)
    cin >> *(p1+i);
  cout << "the following are the values of p1: " << endl;
  for(int i=0; i<n1; i++)
    cout << *(p1+i) << " stored in HEAP @ :" << (p1+i) << endl;
  delete[] p1;

  cout << "Enter the complex number: " << endl;
  p2->read_complex();
  p2->write_complex();
  cout << " located in HEAP @ :" << p2 << endl;
  delete p2;

  cout << "enter the value of n1 < than " << MAXSIZE << endl;
  cin >> n1;
  cout << "enter the complex numbers: " << endl;
  for (int i=0; i<n1; i++)
    (p3+i)->read_complex();
  cout << "the Complex Numbers are: " << endl;
  for(int i=0; i<n1; i++)
  {
    (p3+i)->write_complex();
    cout << " located in HEAP @ :" << (p3+i) << endl;
  }
  delete[] p3;

  return 0;
}
