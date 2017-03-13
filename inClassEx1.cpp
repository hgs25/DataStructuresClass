#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a=2;
	int b=4;
	int c=5;
	int y;
	int w;
	int z;

	y=b*b-4*a*c;
	w=2*a;

	if(y==0)
	{
		cout << "Roots are equal" << endl;
		z=(-b/w);
		cout << "x is equal to : " << z;
	}
	else
	{
		cout << "Roots are complex" << endl;
		z=sqrt(y);
		int r1=(-b+z)/w;
		int r2=(-b-z)/w;
		cout << z << ";" << r1 << ";" << r2;
	}
}
