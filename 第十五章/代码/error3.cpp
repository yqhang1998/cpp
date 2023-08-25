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
		try
		{
			z = hmean(x, y);
		}
		catch(const char *s)
		{
			cout << s << endl;
			cout << "Enter a new pair of arguments:";
			continue;
		}

		cout << "Harmonic mean of " << x << " and " << y << " is " << z << endl;
 		cout << "Enter next set of number: ";
	}

	return 0;
}

double hmean(double a, double b)
{
	if(a == -b)
		throw "bad hmean() arguments, a = -b not allowed";

	return 2.0 * a * b / (a + b);
}
