#include <iostream>

using namespace std;

int main(void)
{
	int cnt = 0;
	char ch;

	cout << "Enter a string: ";
	while(cin.peek() != '$')
	{
		cin.get(ch);
		cnt++;
	}
	cout << "count = " << cnt << endl;

	return 0;
}
