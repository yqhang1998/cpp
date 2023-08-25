#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
	ifstream fin;
	ofstream fout;
	char ch;

	fin.open(argv[1]);
	fout.open(argv[2]);

	while(fin.get(ch))
		fout << ch;

	fin.close();
	fout.close();

	return 0;
}
