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
	unsigned int N;
	unsigned int max = 0;
	unsigned int min = 0;
	unsigned int sum = 0;

	srand(time(NULL));

	cout << "How many times do you want to try: ";
	cin >> N;
	cout << "Enter target distance: ";
	cin >> target;
	cout << "Enter the step lenght: ";
	cin >> dstep;

	for(int i = 0; i < N; i++)
	{
		while(result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
		}
/*
		cout << "After " << steps << " steps, the subject has the following location:\n";
		cout << result;
		result.polar_mode();
		cout << result;
		cout << endl;
*/
		max = (max > steps) ? max : steps;

		if(min == 0)
			min = max;
		else
			min = (min < steps) ? min : steps; 
		sum += steps;

		steps = 0;
		result.reset(0.0, 0.0);
	}

	cout << "The max steps is: " << max << endl;
	cout << "The min steps is: " << min << endl;
	cout << "The average steps is: " << (double)sum / N << endl;
	cout << "Bye" << endl;

	return 0;
}
