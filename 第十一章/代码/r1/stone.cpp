#include <iostream>
#include "stonewt.h"

using namespace std;

int main(void)
{
	Stonewt taft(10, 8);

	taft = taft * 2.0;

	taft.show_lbs();
	taft.show_stn();

	return 0;
}
