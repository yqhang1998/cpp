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

	Pizza *pizza = new Pizza;

	cout << "Please enter the Pizza's company:";
	cin.getline(pizza->company, 20);
	cout << "Please enter the size of pizza in inches:";
	cin >> pizza->diameter;
	cout << "Please enter the weight of pizza in pounds:";
	cin >> pizza->weight;

	cout << "Pizza company: " << pizza->company << ". "<< "diameter in inches: " << pizza->diameter << ". " << "Weight in pounds: " << pizza->weight << endl;

	delete pizza;

	return 0;
}
