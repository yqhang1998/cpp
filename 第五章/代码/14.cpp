#include <iostream>

const int ArSize = 20;

int main(void)
{
	using namespace std;

	char name[ArSize];

	cout << "Your first namem please: ";
	cin >> name;

	cout << "Here is your name: " << endl;

	int i = 0;

	while(name[i] != '\0')  //while(name[i])
	{
		cout << name[i] << ": " << (int)name[i] << endl;
		i++;
	}

	return 0;
}
