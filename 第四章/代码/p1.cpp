#include <iostream>

int main(void)
{
	using namespace std;
	const int size = 20;

	char first_name[size], last_name[size];
	char grade;
	int age;

	cout << "What is your first name?";
	cin.getline(first_name, size);
	cout << "What is your last name?";
	cin.getline(last_name, size);
	cout << "What letter grade do you deserver?";
	cin >> grade;
	cout << "What is your age?";
	cin >> age;

	cout << "Name: " << last_name << ", " << first_name << endl;
	cout << "Grade: " << char(grade+1) << endl;
	cout << "Age: " << age << endl;

	return 0;
}
