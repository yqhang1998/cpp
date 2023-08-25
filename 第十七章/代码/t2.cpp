#include <iostream>

using namespace std;

int main(void)
{
	char ch;
	int ct = 0;

	cin >> ch; //cin.get(ch);

	while(ch != '\n')
	{
		cout << ch;
		ct++;
		cin >> ch; //cin.get(ch);
	}
	cout << ct << endl;
	return 0;
}
