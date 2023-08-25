#include <iostream>
#include <string>

int main(void)
{
	using namespace std;
	string first_name, last_name, full_name;

	cout << "Please enter your first name:" << endl;
	getline(cin, first_name);
	cout << "Please enter your last name:" << endl;
	getline(cin, last_name);
	
	full_name = last_name + ", " + first_name;

	cout << "Here's the information in a single string: ";
	cout << full_name << endl;

	return 0;
}
