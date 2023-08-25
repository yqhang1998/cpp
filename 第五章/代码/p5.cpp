#include <iostream>

int main(void)
{
	using namespace std;

	const string Month[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
	int sale_num[12];
	int sum = 0;

	for(int i = 0; i < 12; i++)
	{
		cout << "Enter the sale number of " << Month[i] << " :";
		cin >> sale_num[i];
	}
	cout << "Input Done!" << endl;

	for(int i = 0; i < 12; i++)
		sum += sale_num[i];

	cout << "Total sale: " << sum << endl;

	return 0;
}
