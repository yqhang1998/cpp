#include <iostream>
#include <string>

using namespace std;

void strcount(const string str);

int main(void)
{
	string input;
	char next;

	cout << "Enter a line: " << endl;
	getline(cin, input);
	while(input != "")
	{
		strcount(input);
		cout << "Enter next line (empty line to quit): " << endl;
		getline(cin, input);
	}

	cout << "ByeBye" << endl;

	return 0;
}

void strcount(const string str)
{
	static int total = 0;
	int count = 0;

	count = str.size();
	total += count;
	cout << count << " characters" << endl;
	cout << total << " characters total" << endl;
}

