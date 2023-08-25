#include <iostream>

using namespace std;

void n_chars(char c, int n);

int main(void)
{
	char ch;
	int times;

	cout << "Enter a character: ";
	cin >> ch;  //cin.get()

	while(ch != 'q')
	{
		cout << "Enter a integer:";
		cin >> times;

		n_chars(ch, times);
		//cout << "times = " << times << endl;
		cout << endl;
		cout << "Enter another character or press q_key to quit:" << endl;
		cin >> ch;
	}

	return 0;
}

void n_chars(char c, int n)
{
	while(n-- > 0)
		cout << c;
}
