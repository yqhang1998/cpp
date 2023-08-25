#include <iostream>

const int DEGREE_TO_MINUTE = 60;
const int DEGREE_TO_SECOND = 3600;

int main(void)
{
	using namespace std;

	int degree, minute, second;
	double degree_style;

	cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
	cout << "First, enter the degree:";
	cin >> degree;
	cout <<"Next, enter the minutes of arc:";
	cin >> minute;
	cout << "Finally, enter the seconds of arc:";
	cin >> second;

	degree_style = degree + (double)minute/DEGREE_TO_MINUTE + (double)second/DEGREE_TO_SECOND;

	cout << degree << " degrees, " << minute << " minutes, " << second << " seconds = " << degree_style << " degrees" << endl;

	return 0;
}
