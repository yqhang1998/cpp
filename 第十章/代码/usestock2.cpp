#include <iostream>
#include "stock10.h"

int main(void)
{
	using std::cout;

	Stock stock1("Nanosmart", 12, 20.0);
	stock1.show();

	Stock stock2 = Stock("Boffo objects", 2, 2.0);
	stock2.show();

	cout << "Assigning stock1 to stock2: \n";
	stock2 = stock1;
	cout << "Listing stock1 and stock2:\n";
	stock1.show();
	stock2.show();

	cout << "Using a constructor to reset an object:\n";
	stock1 = Stock("Nifty Foods", 10, 50.0);
	cout << "Revised stock1:\n";
	stock1.show();
	cout << "Done\n";

	const Stock land = Stock("Klu proper", 3, 3.0);
	land.show();

	return 0;
}
