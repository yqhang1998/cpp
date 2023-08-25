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

	fstream finout;
	finout.open(file, ios_base::in | ios_base::out | ios_base::binary);
	int ct = 0;	
	if(finout.is_open())
	{
		cout << "Here are the current contents of the " << file << endl;
		while(finout.read((char *)&pl, sizeof pl))
			cout << ct++ << ": "<< pl.name << ": " << setprecision(0) << pl.population << ", " << setprecision(1) << pl.g << endl;
		
		if(finout.eof())
			finout.clear();		
	}

	cout << "Enter the record number you wish to change: ";
	int rec;
	cin >> rec;
	while(cin.get() != '\n');
	if(rec < 0 | rec >= ct)
	{
		cout << "Out of range!" << endl;
		exit(0);
	}
	streampos place = rec * sizeof pl;
	finout.seekg(place);
	finout.read((char *)&pl, sizeof pl);
	cout << rec << ": " << pl.name << ": " << setprecision(0) << pl.population << ", " << setprecision(1) << pl.g << endl;
	if(finout.eof())
		finout.clear();	
	
	cout << "Enter planet name: " << endl;
	cin.get(pl.name, 20);
	while(cin.get() != '\n');
	cout << "Enter planet population: ";
	cin >> pl.population;
	cout << "Enter the planet's acceleration gravity:";
	cin >> pl.g;
	finout.seekp(place);
	finout.write((char *)&pl, sizeof pl);

	ct = 0;
	finout.seekg(0);
	cout << "Here are the current contents of the " << file << endl;
	while(finout.read((char *)&pl, sizeof pl))
		cout << ct++ << ": "<< pl.name << ": " << setprecision(0) << pl.population << ", " << setprecision(1) << pl.g << endl;

	finout.close();

	return 0;
}
