#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
	int n;
	cout << "Enter an integer: ";
	cin >> n;

	cout << showbase;
	cout << setw(15) << n << hex << setw(15) << n << oct << setw(15) << n << endl;

	return 0;
}
