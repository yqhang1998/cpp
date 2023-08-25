#include <iostream>
#include <cstring>

int main(void)
{
	using namespace std;
	const int SIZE = 20;

	char first_name[SIZE], last_name[SIZE];
	char full_name[2*SIZE];

	cout << "Please enter your first name:" << endl;
	cin.getline(first_name, SIZE);
	cout << "Please enter your last name:" << endl;
	cin.getline(last_name, SIZE);
	
	strcpy(full_name, last_name);
	strcat(full_name, ", ");
	strcat(full_name, first_name);

	cout << "Here's the information in a single string: ";
	cout << full_name << endl;

	return 0;
}
