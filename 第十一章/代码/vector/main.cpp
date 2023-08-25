#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vector.h"

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

	srand(time(NULL));

	cout << "Enter target distance(q to quit): ";
	while(cin >> target)
	{
		cout << "Enter the step lenght: ";
		if(!(cin >> dstep))
			break;

		while(result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
		}

		cout << "After " << steps << " steps, the subject has the following location:\n";
		cout << result;
		result.polar_mode();
		cout << result;

		cout << endl;

		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Enter target distance(q to quit): ";
	}
	cout << "Bye" << endl;

	return 0;
}
