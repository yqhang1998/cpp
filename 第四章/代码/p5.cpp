#include <iostream>

struct CandyBar
{
	char brand[20];
	float weight;
	unsigned int calorie;
};

int main(void)
{
	using namespace std;

	CandyBar snack = {"Mocha Munch", 2.3, 350};

	cout << "Band = " << snack.brand << endl;
	cout << "Weight = " << snack.weight << endl;
	cout << "Calorie = " << snack.calorie << endl;

	return 0;
}
