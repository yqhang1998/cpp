#include <iostream>

int main(void)
{
	using std::cout;
	using std::cin;
	using std::endl;

	cout << "Enter an integer: ";
	int by;
	cin >> by;

	cout << "Counting by " << by << endl;

	for(int i = 0; i < 100; i = i + by)
		cout << i << endl;
}
