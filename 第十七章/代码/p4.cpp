#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(void)
{
	string str;

	ifstream fin1;
	ifstream fin2;
	fin1.open("t1.dat");
	fin2.open("t2.dat");

	ofstream fout;
	fout.open("t3.dat");

	while(!fin1.eof() || !fin2.eof())
	{
		if(getline(fin1, str) && str.size() > 0)
			fout << str;
		fout << " ";

		if(getline(fin2, str) && str.size() > 0)
			fout << str;

		fout << endl;
	}

	fin1.close();
	fin2.close();
	fout.close();

	return 0;
}
