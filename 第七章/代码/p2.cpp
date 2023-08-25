#include <iostream>

using namespace std;

const int  MAX = 10;

int fill_golf(double ar[], int n);
void show_golf(double ar[], int n);
double average_golf(double ar[], int n);

int main(void)
{
	double golf[MAX];

	int size = fill_golf(golf, MAX);

	if(size > 0)
	{
		show_golf(golf, size);
		cout << "Average : " << average_golf(golf, size) << endl;
	}
	else
		cout << "There is no scores!" << endl;

	return 0;
}

int fill_golf(double ar[], int n)
{
	double temp;
	int i;

	for(i = 0; i < MAX; i++)
	{
		cout << "Enter golf socre, No." << i + 1 << ": ";
		cin >> temp;
		if(!cin)
		{
			cin.clear();
			while(cin.get() != '\n');
			cout << "Invalid input, terminate." << endl;
			break;
		}
		else if(temp < 0)
			break;
		else
			ar[i] = temp;
	}
	return i;
}

void show_golf(double ar[], int n)
{
	cout << "golf result : ";
	for(int i = 0; i < n; i++)
		cout << ar[i] << " ";
	cout << endl;
}

double average_golf(double ar[], int n)
{
	double average, sum = 0;

	for(int i = 0; i < n; i++)
		sum += ar[i];

	average = sum / n;

	return average;
}
