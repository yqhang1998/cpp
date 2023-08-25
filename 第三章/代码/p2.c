#include <iostream>

const int FOOT_TO_INCH = 12;
const double INCH_TO_METER = 0.0254;
const double KILLOGRAM_TO_POUND = 2.2;

int main(void)
{
	using namespace std;

	int height_foot, height_inch;
	double weight_pound, height, weight, bmi;

	cout << "Please enter your height foot:";
	cin >> height_foot;
	cout << "Please enter your height inches:";
	cin >> height_inch;
	cout << "Please enter your weight in pounds:";
	cin >> weight_pound;

	height = (height_foot*FOOT_TO_INCH + height_inch)*INCH_TO_METER;
	weight = weight_pound / KILLOGRAM_TO_POUND;

	bmi = weight / (height * height);

	cout << "Your BMI is " << bmi << endl;

	return 0;
}
