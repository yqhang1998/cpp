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
	while(fin.get(ch))
		cout << ch;
	fin.close();

	return 0;
}
