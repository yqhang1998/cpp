#include <iostream>

using namespace std;

long long factorial(unsigned int n);

int main(void)
{
	int number;
	long long result;

	cout << "Enter a number for factorial: ";

	while(cin >> number)
	{
		result = factorial(number);
		cout << number << "! = " << result << endl;
		cout << "Enter a number for factorial: ";		
	} 

	return 0;
}

long long factorial(unsigned int n)
{
	if(n == 0)
		return 1;
	else
		return n * factorial(n-1);
}
