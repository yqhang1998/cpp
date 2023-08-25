#include <iostream>
#include <cstdlib>
#include <cmath>
#include "exc_mean.h"

using namespace std;

double hmean(double a, double b);
double gmean(double a, double b);
double mean(double a, double b);

int main(void)
{
	double x, y, z;

	cout << "Enter two numbers: ";
	while(cin >> x >> y)
	{
		try
		{
			z = mean(x, y);
			cout << "The mean mean of " << x << " and " << y << " is " << z << endl;
		}
		catch(bad_hmean &bh)
		{
			bh.mesg();//cout << s << endl;
			cout << "2) exception" << endl;
			cout << "Enter a new pair of arguments:";
			continue;
		}
		catch(bad_gmean &bg)
		{
			cout << bg.mesg();
			cout << "Value used: " << bg.v1 << ", " << bg.v2 << endl;
			cout << "Sorry, quit now" << endl;
			break;
		}

		cout << "Enter next set of number: ";
	}

	return 0;
}

double hmean(double a, double b)
{
	if(a == -b)
		throw bad_hmean(a, b);

	return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
	if(a < 0 || b < 0)
		throw bad_gmean(a, b);
	return sqrt(a*b);
}

double mean(double a, double b)
{
	double am, hm, gm;

	am = (a + b) / 2.0;

	try
	{
		hm = hmean(a, b);
		gm = gmean(a, b);
	}
	catch(bad_hmean &bh)
	{
		bh.mesg();
		cout << "1) expception" << endl;
		throw;
	}

	cout << "Hello world\n";

	return (am + hm + gm) / 3.0;
}













