#include <iostream>

int main(void)
{
	using namespace std;

	char ch;
	int count = 0;

	cout << "Enter characters, enter # to quit:" << endl;
	cin.get(ch);

	while(cin.fail() == false)
	{
		cout << ch;
		++count;
		cin.get(ch);
	}

	cout << endl;
	cout << count << " characters read" << endl;

	return 0;
}
