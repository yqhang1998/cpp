#include <iostream>
#include "stonewt1.h"

using namespace std;

int main(void)
{
	Stonewt poppins(9, 2.8);

	double p_wt = poppins;
	cout << "poppins = " << p_wt << " pounds." << endl;

	int weight = poppins;
	cout << "poppins = " << weight << " pounds." << endl; 

	cout << "poppins = " << poppins << " pounds." << endl;

	return 0;
}
