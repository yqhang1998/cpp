#include <iostream>
#include "queue.h"

using namespace std;

int main(void)
{
	Queue<Worker *> wk(3);

	Worker w1;
	w1.Set();
	w1.Show();
	wk.enqueue(&w1);
	cout << "Now queue has: " << wk.queuecount() << " items." << endl;

	Worker w2;
	w2.Set();
	w2.Show();
	wk.enqueue(&w2);
	cout << "Now queue has: " << wk.queuecount() << " items." << endl;

	Worker w3;
	w3.Set();
	w3.Show();
	wk.enqueue(&w3);
	cout << "Now queue has: " << wk.queuecount() << " items." << endl;

	return 0;
}
