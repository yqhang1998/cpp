//const int *pt;   ==  int const *pt;
//int *const pt;
//const int *const pt;

#include <iostream>

using namespace std;

int main(void)
{
	int n = 10;
	int m = 100;
	int *const pt = &n;

	cout << "1):n = " << n << endl;
	*pt = 20; 
	cout << "2):n = " << n << endl;

//	pt = &m;
	//cout << "*pt = " << *pt << endl;
	//cout << "m = " << m << endl;

	return 0;
}
