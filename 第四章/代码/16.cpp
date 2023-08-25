#include <iostream>

int main(void)
{
	using namespace std;

	int updates = 6;
	int *p_updates;
	p_updates = &updates;

	cout << "Value: updates =  " << updates << endl;
	cout << "p_updates = " << p_updates << endl;

	cout << "Address : &updates = " << &updates << endl;

	cout << "*p_updates = " << *p_updates << endl;
	
	*p_updates = *p_updates + 1;
	cout << " Now value: updates =  " << updates << endl;	

	return 0;
}
