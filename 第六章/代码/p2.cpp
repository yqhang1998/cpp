#include <iostream>
#include <array>

using namespace std;

int main(void)
{
	array<double, 10> donation;

	double input;
	int count = 0;
	double sum = 0.0;
	double average;
	int bigger = 0;

	cout << "Please enter the double numerial: ";

	while(cin>>input)
	{
		donation[count++] = input;
		if(count == 10)
			break;
		cout << "Please enter the double numerial: ";
	}

	for(int i = 0; i < count; i++)
		sum += donation[i];

	average = sum / count;

	for(int i = 0; i < count; i++)
	{
		if(donation[i] > average)
			bigger++;
	}

	cout << "Average is: " << average << endl;
	cout << bigger << " numbers are bigger than average." << endl;

	return 0;
}

