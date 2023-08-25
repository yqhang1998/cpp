#include <iostream>

using namespace std;

double cube(double a);
double recube(double &ra);

int main(void)
{
	double x = 3.0;
	const double y = 5.0;

	cout << cube(5.0 + x) << " = cube of " << "5.0 + x" << endl;
	
	cout << recube(y) << " = cube of " << y << endl;

	return 0;
}

double cube(double a)
{
	a *= a * a;
	return a;
}

double recube(double &ra)
{
	return ra * ra * ra;
}
