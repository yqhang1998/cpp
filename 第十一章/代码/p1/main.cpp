#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vector.h"
#include <fstream>

using namespace std;
using namespace VECTOR;

int main(void)
{
	double target;
	double dstep;
	Vector result(0.0, 0.0);
	double direction;
	Vector step;
	unsigned long steps = 0;

	ofstream fout;
	fout.open("randwalk.txt");

	srand(time(NULL));

	cout << "Enter target distance(q to quit): ";
	while(cin >> target)
	{
		cout << "Enter the step lenght: ";
		if(!(cin >> dstep))
			break;

		fout << "Target distance: " << target << ", step size: " << dstep << endl;

		while(result.magval() < target)
		{
			fout << steps << ": (x, y) = " << result << endl;
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
		}

		cout << "After " << steps << " steps, the subject has the following location:\n";
		cout << result;

		fout << "After " << steps << " steps, the subject has the following location:\n";
		fout << result;

		result.polar_mode();
		cout << result;
		fout << result;

		fout << "Average outward distance per step = " << result.magval() / steps << endl;

		cout << endl;

		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Enter target distance(q to quit): ";
	}
	cout << "Bye" << endl;

	return 0;
}
