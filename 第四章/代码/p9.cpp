#include <iostream>
#include <cstring>

struct CandyBar
{
	char brand[20];
	float weight;
	unsigned int calorie;
};

int main(void)
{
	using namespace std;

	//CandyBar snack[3] = {{"Mocha Munch", 2.3, 350}, {"Flip Fleming", 3.2, 500}, {"Micheal Bay", 4.3, 400}};
	CandyBar *pt = new CandyBar[3];

	strcpy(pt[0].brand, "Mocha Munch");
	pt[0].weight = 2.3;
	pt[0].calorie = 350;

	strcpy(pt[1].brand, "Flip Fleming");
	pt[1].weight = 3.2;
	pt[1].calorie = 500;

	strcpy(pt[2].brand, "Micheal Bay");
	pt[2].weight = 4.3;
	pt[2].calorie = 400;

	cout << "1st Band = " << pt->brand << endl;
	cout << "1st Weight = " << pt->weight << endl;
	cout << "1st Calorie = " << pt->calorie << endl;
	cout << "*************************************" << endl;

	cout << "2nd Band = " << (pt+1)->brand << endl;
	cout << "2nd Weight = " << (pt+1)->weight << endl;
	cout << "2nd Calorie = " << (pt+1)->calorie << endl;
	cout << "*************************************" << endl;

	cout << "3th Band = " << (pt+2)->brand << endl;
	cout << "3th Weight = " << (pt+2)->weight << endl;
	cout << "3th Calorie = " << (pt+2)->calorie << endl;
	cout << "*************************************" << endl;

	delete [] pt;

	return 0;
}
