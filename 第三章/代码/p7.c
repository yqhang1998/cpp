#include <iostream>

const double GALLON_TO_LITRE = 3.875;
const double HKM_TO_MILE = 62.14;

int main(void)
{
	using namespace std;

	double fuel_consume_eur, fuel_consume_us;

	cout << "Enter the fuel consume in europe(L/100Km): ";
	cin >>fuel_consume_eur;

	fuel_consume_us = (GALLON_TO_LITRE * HKM_TO_MILE) / fuel_consume_eur;

	cout << "The fuel consume is " << fuel_consume_us << " mile/gallon." << endl;

	return 0;
}
