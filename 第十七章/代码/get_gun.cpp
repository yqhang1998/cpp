#include <iostream>

using namespace std;

const int Limit = 255;

int main(void)
{
	char input[Limit];

	cout << "Enter a string for getline() processing: " << endl;
	cin.getline(input, Limit, '#');
	cout << "Here is your input: " << endl;
	cout << input << endl;
	cout << "-------------------------" << endl;

	char ch;
	cin.get(ch);
	cout << "The next input character is: " << ch << endl;

	cin.ignore(Limit, '\n');

	cout << "------------------------" << endl;
	cout << "Enter a string for get() processing " << endl;
	cin.get(input, Limit, '#');
	cout << "Here is your input: " << endl;
	cout << input << endl;
	
	cin.get(ch);
	cout << "The next input character is: " << ch << endl;

	return 0;
}
