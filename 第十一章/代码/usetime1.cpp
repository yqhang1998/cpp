#include <iostream>
#include "mytime1.h"

using namespace std;

int main(void)
{
	Time coding(2, 40);
	Time fixing(5, 55);
	Time total;
	Time Planning;

	cout << "coding time = ";
	coding.Show();

	cout << "fixing time = ";
	fixing.Show();

//	total = coding.Sum(fixing);
	total = coding + fixing;
	total.Show();

	Planning = coding.operator+(fixing);
	Planning.Show();

	return 0;
}
