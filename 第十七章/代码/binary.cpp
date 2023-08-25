#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>

using namespace std;

struct planet
{
	char name[20];
	double population;
	double g;
};

int main(void)
{
	planet pl;
	const char *file = "planet.dat";

	cout << fixed;

	ifstream fin;
	fin.open(file, ios_base::in | ios_base::binary);
	if(fin.is_open())
	{
		cout << "Here are the current contents of the " << file << endl;
		while(fin.read((char *)&pl, sizeof pl))
			cout << pl.name << ": " << setprecision(0) << pl.population << ", " << pl.g << endl;
		fin.close(); 
	}

	ofstream fout;
	fout.open(file, ios_base::out | ios_base::app | ios_base::binary);
	if(!fout.is_open())
	{
		cout << "Can't open " << file << endl;
		exit(0);
	}
	cout << "Enter planet name (enter blank line to quit)" << endl;
	cin.get(pl.name, 20);
	while(pl.name[0] != '\0')
	{
		while(cin.get() != '\n');
		cout << "Enter planet population: ";
		cin >> pl.population;
		cout << "Enter the planet's acceleration of gravity: ";
		cin >> pl.g;
		while(cin.get() != '\n');
		fout.write((char *)&pl, sizeof pl);
		cout << "Enter planet name (enter blank line to quit)" << endl;
		cin.get(pl.name, 20);
	}
	fout.close();

	fin.clear();
	fin.open(file, ios_base::in | ios_base::binary);
	if(fin.is_open())
	{
		cout << "Here are the current contents of the " << file << endl;
		while(fin.read((char *)&pl, sizeof pl))
			cout << pl.name << ": " << setprecision(0) << pl.population << ", " << pl.g << endl;
		fin.close(); 
	}

	return 0;
}
