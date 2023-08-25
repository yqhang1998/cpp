#include <iostream>

using namespace std;

int main(void)
{
	int row;

	cout << "Please enter the number of rows: ";
	cin >> row;

	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < row - i - 1; j++)
			cout << ".";
		for(int j = 0; j <= i; j++)
			cout << "*";
		cout << endl;
	}

	return 0;
}
