#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

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
	stringstream str;
	int n;

	while(fin.get(ch))
	{
		str <<  ch;//sum += ch;
	}

	while(str >> n)  // cin >> n
		sum += n;

	cout << "sum: " << sum << endl;
	fin.close();

	return 0;
}
