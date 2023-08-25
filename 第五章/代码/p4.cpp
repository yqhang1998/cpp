#include <iostream>

const int DEPOSIT_BASE = 100;

int main(void)
{
	using namespace std;

	double daphne_deposit = DEPOSIT_BASE;
	double cleo_deposit = DEPOSIT_BASE;
	int year = 0;

	while(daphne_deposit >= cleo_deposit)
	{
		daphne_deposit += 0.1 * DEPOSIT_BASE;
		cleo_deposit += 0.05 * cleo_deposit;
		year++; 
	}

	cout << "After " << year << " years, " << "Cleo has more money than Daphne!" << endl;
	cout << "Daphne has " << daphne_deposit << " dollars." << endl; 
	cout << "Cleo has " << cleo_deposit << " dollars." << endl; 

	return 0;
}
