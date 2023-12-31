#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main(void)
{
	const char *file = "mysecret";
	char ch;

	ifstream fin;
	fin.open(file);
	if(fin.is_open())
	{
		cout << "Here are the contents of " << file  << ": " << endl;
		while(fin.get(ch))
			cout << ch;

		fin.close();
	}

	ofstream fout;
	fout.open(file, ios_base::out | ios_base::app);
	if(!fout.is_open())
	{
		cout << "Can't open " << file << endl;
		exit(0);
	}

	cout << "Enter new string append to the file: " << endl;
	string str;
	while(getline(cin, str) && str.size() > 0)
	{
		fout << str << endl;
	}
	fout.close();

	fin.clear();
	fin.open(file);
	if(fin.is_open())
	{
		cout << "Here are the contents of " << file  << ": " << endl;
		while(fin.get(ch))
			cout << ch;

		fin.close();
	}

	return 0;
}
