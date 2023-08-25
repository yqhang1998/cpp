#include <iostream>

using namespace std;

int main(void)
{
	int a, b;
	int c;

	cout << "Enter two ingtegers:";
	cin >> a >> b;

	c = a > b ? a : b;

	cout << "The larger of " << a << " and " << b << " is " << c << endl;

	return 0;
}
