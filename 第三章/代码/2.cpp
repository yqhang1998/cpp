#include <iostream>
#include <climits>

int main(void)
{
	using namespace std;

	short sam = SHRT_MAX;
	unsigned short sue = sam;

	cout << "Sam has " << sam << " dolloars and Sue has " << sue << " dolloars deposited." << endl;

	cout << "Add $1 to each account." << endl;

	sam = sam + 1;
	sue = sue + 1;

	cout << "Now, Sam has " << sam << " dolloars and Sue has " << sue << " dolloars deposited." << endl;

	sam = 0;
	sue = 0;

	sam = sam - 1;
	sue = sue - 1;

	cout << "Now, Sam has " << sam << " dolloars and Sue has " << sue << " dolloars deposited." << endl;

	return 0;
}
