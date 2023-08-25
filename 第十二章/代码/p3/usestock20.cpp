#include <iostream>
#include "stock20.h"

int main(void)
{
	using std::cout;

	Stock stock1("Nanosmart", 12, 20.0);
	cout << stock1;//stock1.show();

	Stock stock2 = Stock("Boffo objects", 2, 2.0);
	cout << stock2;//stock2.show();

	const Stock *top = &stock1.topval(stock2);
	cout << "\nNow show the top val:\n";
	cout << *top;//top.show();

	return 0;
}
