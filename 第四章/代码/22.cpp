#include <iostream>

struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main(void)
{
	using namespace std;

	inflatable *ps = new inflatable;
	cout << "Enter name of inflatalbe item: ";
	cin.get(ps->name, 20);
	cout << "Enter volume in cubic feet: ";
	cin >> (*ps).volume;
	cout << "Enter price $";
	cin >> ps->price;

	cout << "Nanme: " << (*ps).name << endl;
	cout << "Volume: " << ps->volume << endl;
	cout << "Price: $" << ps->price << endl;

	delete ps;

	return 0;
}
