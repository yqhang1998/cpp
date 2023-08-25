#include <iostream>

const int FOOT_TO_INCH = 12;

int main(void)
{
	using namespace std;

	int height;

	cout << "Please enter your height int inches_";
	cin >> height;

	cout << "Your height convert to " << height/FOOT_TO_INCH;
	cout << " foot and " << height%FOOT_TO_INCH << " inches height." << endl;

	return 0;
}
