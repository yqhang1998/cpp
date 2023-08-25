#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[])
{
	char ch;

	ofstream fout;
	fout.open(argv[1]);

	if(fout.is_open())
	{
		cout << "Please enter the data: ";
		while(cin.get(ch) && ch != EOF)
			fout << ch;
	}
	else
	{
		cout << "Can't open / create the file" << endl;
		exit(0);
	}

	return 0;
}
