#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

const int LIMIT = 5;

void file_it(ostream &os, double fo, const double fe[], int n);

int main(void)
{
	fstream fout;
	const char *fn = "ep-data.txt";

	fout.open(fn);
	if(!fout.is_open())
	{
		cout << "Can't open " << fn << ". Bye." << endl;
		exit(EXIT_FAILURE);
	}

	double objective;
	cout << "Enter the focal length of your telescope objective in mm:";
	cin >> objective;

	double eps[LIMIT];
	for(int i = 0; i < LIMIT; i ++)
	{
		cout << "EyePieces #" << i + 1 << ": ";
		cin >> eps[i];
	}

	file_it(cout, objective, eps, LIMIT);
	file_it(fout, objective, eps, LIMIT);

	cout << "Done." << endl;

	return 0;
}

void file_it(ostream &os, double fo, const double fe[], int n)
{
	os << "Focal length of objective: " << fo << endl;
	os << "f.1. eyepieces" << " magnification" << endl;
	for(int i = 0; i < n; i++)
	{
		os << "        " << fe[i] << "       " << int(fo/fe[i] + 0.5) << endl;
	}
}
