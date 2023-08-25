#include <iostream>

int main(void)
{
	using namespace std;

	double num, sum = 0;

	do
	{
		cout << "Please enter a number to add: ";
		cin >> num;
		sum += num;
	}
	while(num != 0);

	cout << "Input end, sum = " << sum << endl;

	return 0;
}
