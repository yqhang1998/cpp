#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

const int LIM = 10;

void Show(int n);

int main(void)
{
	int ar[LIM] = {4, 5, 4, 2, 2, 3, 4, 8, 1, 4};

	list<int> la(ar, ar + 10);
	list<int> lb(ar, ar + 10);

	cout << "Original list: " << endl;
	cout << "la: ";
	for_each(la.begin(), la.end(), Show);
	cout << endl;
	cout << "lb: ";
	for_each(lb.begin(), lb.end(), Show);
	cout << endl; 

	la.remove(4);
	cout << "After remove(4) method: " << endl;
	cout << "la: ";
	for_each(la.begin(), la.end(), Show);
	cout << endl; 

	list<int>::iterator last;
	last = remove(lb.begin(), lb.end(), 4);
	cout << "After remove() function: " << endl;
	cout << "lb: ";
	for_each(lb.begin(), lb.end(), Show);
	cout << endl; 
	
	lb.erase(last, lb.end());
	cout << "After erase() method: " << endl;
	cout << "lb: ";
	for_each(lb.begin(), lb.end(), Show);
	cout << endl;

	return 0;
}

void Show(int n)
{
	cout << n << " ";
}
