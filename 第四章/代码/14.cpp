#include <iostream>

using namespace std;

union one2all
{
	char ch;
	int n;
};

int main(void)
{
	one2all num;

	cout << "sizeof(num) = " << sizeof(num) << endl;

	num.ch = 'A';

	cout << "num.ch = " << num.ch << endl;
	cout << "num.n = " << num.n << endl;
	
	return 0;
}
