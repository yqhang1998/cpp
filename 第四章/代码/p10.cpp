#include <iostream>
#include <array>

int main(void)
{
	using namespace std;

	array<float, 3> record_list;
	float average;

	cout << "Please enter three records of 40 meters:" << endl;
	cout << "First record:";
	cin >> record_list[0];
	cout << "Second record:";
	cin >> record_list[1];
	cout << "Third record:";
	cin >> record_list[2];

	cout << "1st: " << record_list[0] << "; " << "2nd: " << record_list[1] << "; " << "3rd: " << record_list[2] << endl;

	average = (record_list[0] + record_list[1] + record_list[2]) / 3;
	cout << "Average: " << average << endl;

	return 0;
}
