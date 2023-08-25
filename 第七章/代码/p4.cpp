#include <iostream>

using namespace std;

long double probability(unsigned int numbers, unsigned int picks);

int main(void)
{
	unsigned int total, choices;

	long double field = probability(47, 5);
	long double special = probability(27, 1);
	long double result = field * special;
	cout << result << endl;

	cout << "Bye" << endl;

	return 0;
}

long double probability(unsigned int numbers, unsigned int picks)
{
	double n, p;
	long double result = 1.0;

	for(n = numbers, p = picks; p > 0; n--, p--)
		result = result * (n / p);

	return result;
}
