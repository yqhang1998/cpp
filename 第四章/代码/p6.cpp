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

	CandyBar snack[3] = {{"Mocha Munch", 2.3, 350}, {"Flip Fleming", 3.2, 500}, {"Micheal Bay", 4.3, 400}};

	cout << "1st Band = " << snack[0].brand << endl;
	cout << "1st Weight = " << snack[0].weight << endl;
	cout << "1st Calorie = " << snack[0].calorie << endl;
	cout << "*************************************" << endl;

	cout << "2nd Band = " << snack[1].brand << endl;
	cout << "2nd Weight = " << snack[1].weight << endl;
	cout << "2nd Calorie = " << snack[1].calorie << endl;
	cout << "*************************************" << endl;

	cout << "3th Band = " << snack[2].brand << endl;
	cout << "3th Weight = " << snack[2].weight << endl;
	cout << "3th Calorie = " << snack[2].calorie << endl;
	cout << "*************************************" << endl;

	return 0;
}
