#include <iostream>

int main(void)
{
	using namespace std;

	long long global_amount, american_amount;
	double population_percent;

	cout << "Enter the world's population: ";
	cin >> global_amount;
	cout << "Enter the population of US: ";
	cin >> american_amount;

	population_percent = 100 * (double)american_amount / (double)global_amount;

	cout << "The population of the US is " << population_percent << "% of the world population." << endl; 

	return 0;
}
