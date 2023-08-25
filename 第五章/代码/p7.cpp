#include <iostream>
#include <string>

using namespace std;

struct car
{
	string manufacturer;
	int date;
};

int main(void)
{
	int car_number;
	car *pcar;

	cout << "How many cars do you wish to catalog?";
	cin >> car_number;
	cin.get();
	pcar = new car[car_number];

	for(int i = 0; i < car_number; i++)
	{
		cout << "Car #" << i + 1 << ":" << endl;
		cout << "Please enter the maker: ";
		getline(cin, pcar[i].manufacturer);
		cout << "Please enter the year made: ";
		cin >> pcar[i].date;
		cin.get();
	}

	cout << "Here is your collection:" << endl;
	for(int i = 0; i < car_number; i++)
		cout << pcar[i].date << " " << pcar[i].manufacturer << endl;

	return 0;
}
