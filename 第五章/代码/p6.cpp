#include <iostream>

int main(void)
{
	using namespace std;

	const string Month[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
	int sale_num[3][12];
	int sum = 0;

	for(int i = 0; i < 3; i++)
	{
		cout << "Starting " << i + 1 << " year's data." << endl;
		for(int j = 0; j < 12; j++)
		{
			cout << "Enter the sale number of " << Month[j] << " :";
			cin >> sale_num[i][j];
		}
	}
	cout << "Input Done!" << endl;

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 12; j++)
			sum += sale_num[i][j];
	}

	cout << "Three years total sale: " << sum << endl;

	return 0;
}
