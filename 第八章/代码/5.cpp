#include <iostream>

using namespace std;

double cube(double a);
double recube(double &ra);

int main(void)
{
	double x = 3.0;

	cout << cube(x) << " = cube of " << x << endl;
	
	cout << recube(x) << " = cube of " << x << endl;

	return 0;
}

double cube(double a)
{
	a *= a * a;
	return a;
}

double recube(const double &ra)
{
	ra *= ra * ra;
	return ra;
}
