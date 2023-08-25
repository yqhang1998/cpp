#include <iostream>

using namespace std;

const int MAX = 40;

int Fill_array(double arr[], int size);
void Show_array(double arr[], int size);
void Reverse_array(double arr[], int size);

int main(void)
{
	double array[MAX];

	int size = Fill_array(array, MAX);

	Show_array(array, size);
	Reverse_array(array, size);
	Show_array(array, size);

	Reverse_array(&array[1], size - 2);
	Show_array(array, size);

	return 0;
}

int Fill_array(double arr[], int size)
{
	int i;
	double temp;

	for(i = 0; i < size; i++)
	{
		cout << "Please enter a number:";
		cin >> temp;
		if(!cin)
		{
			cin.clear();
			while(cin.get() != '\n');
			break;
		}
		else
			arr[i] = temp;
	}
	return i;
}

void Show_array(double arr[], int size)
{
	cout << "The array content: " << endl;
	for(int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void Reverse_array(double arr[], int size)
{
	double temp;

	for(int i = 0; i < size/2; i++)
	{
		temp = arr[i];
		arr[i] = arr[size-i-1];
		arr[size-i-1] = temp;
	}
}
