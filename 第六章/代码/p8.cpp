#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main(void)
{
	ifstream inFile;
	string file_name;
	char ch;
	int count = 0;

	cout << "Enter the file name:";
	getline(cin, file_name);
	inFile.open(file_name);
	if(!inFile.is_open())
	{
		cout << "Failed to open the file!" << endl;
		exit(EXIT_FAILURE);
	}

	while(!inFile.eof())
	{
		inFile >> ch;
		count++;
	}

	cout << file_name << " has " << count << " characters." << endl;
	inFile.close();

	return 0;
}


