#include <iostream>

struct Pizza
{
	char company[20];
	float diameter;
	float weight;
};

int main(void)
{
	using namespace std;

	Pizza dinner;

	cout << "Please enter the Pizza's company:";
	cin.getline(dinner.company, 20);
	cout << "Please enter the size of pizza in inches:";
	cin >> dinner.diameter;
	cout << "Please enter the weight of pizza in pounds:";
	cin >> dinner.weight;

	cout << "Pizza company: " << dinner.company << ". "<< "diameter in inches: " << dinner.diameter << ". " << "Weight in pounds: " << dinner.weight << endl;


	return 0;
}
