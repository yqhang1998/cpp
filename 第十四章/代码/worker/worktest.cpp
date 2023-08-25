#include <iostream>
#include "worker.h"

const int LIM = 4;

int main(void)
{
	Waiter bob("Bob", 314, 5);
	Singer bev("Bev", 522, 3);
	Waiter w_temp;
	Singer s_temp;

	Worker *pw[LIM] = {&bob, &bev, &w_temp, &s_temp};

	int i;
	for(i = 2; i < LIM; i++)
		pw[i]->Set();

	for(i = 0; i < LIM; i++)
	{
		pw[i]->Show();
		cout << endl;
	}

	return 0;
}
