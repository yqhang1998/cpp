#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(void)
{
	string filename;

	cout << "Enter name for new file: ";
	cin >> filename;

	ifstream fin;
	fin.open(filename);
	cout << "Here are the contents of " << filename << ": " << endl;

	char ch;
	int sum = 0;
	while(fin.get(ch))
	{
		sum += ch;
	}
	cout << "sum: " << sum << endl;
	fin.close();

	return 0;
}
