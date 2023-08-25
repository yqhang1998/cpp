#include <iostream>

using namespace std;

double harmean(double x, double y);

int main(void)
{
	double n1, n2, result;

	cout << "Please enter two numbers, until one of them is zero:";
	cin >> n1 >> n2;
	while((n1 != 0) && (n2 != 0))
	{
		result = harmean(n1, n2);
		cout << "The harmean is : " << result << endl;
		cout << "Please enter two numbers, until one of them is zero:";
		cin >> n1 >> n2;
	}

	return 0;
}

double harmean(double x, double y)
{
	return 2.0 * x * y / (x + y);
}
