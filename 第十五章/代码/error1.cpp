#include <iostream>
#include <cstdlib>

using namespace std;

double hmean(double a, double b);

int main(void)
{
	double x, y, z;

	cout << "Enter two numbers: ";
	while(cin >> x >> y)
	{
		z = hmean(x, y);
		cout << "Harmonic mean of " << x << " and " << y << " is " << z << endl;
 		cout << "Enter next set of number: ";
	}

	return 0;
}

double hmean(double a, double b)
{
	if(a == -b)
	{
		cout << "invalid arguments to hmean()" << endl;
		abort();
	}
	return 2.0 * a * b / (a + b);
}
