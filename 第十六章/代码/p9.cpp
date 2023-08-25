#include <iostream>
#include <vector>
#include <list>
#include <cstdlib>
#include <algorithm>
#include <ctime>

using namespace std;

int main(void)
{
	srand(time(0));

	const int limit = 1000000;

	vector<int> vi0;
	for(int i = 0; i < limit; i++)
		vi0.push_back(rand() % 1000);

	vector<int> vi(vi0);
	list<int> li(vi0.begin(), vi0.end());

	clock_t start = clock();
	sort(vi.begin(), vi.end());
	clock_t end = clock();
	cout << "vector: " << (double)(end - start) / CLOCKS_PER_SEC << endl;

	start = clock();
	li.sort();
	end = clock();
	cout << "list: " << (double)(end - start) / CLOCKS_PER_SEC << endl;

	copy(vi0.begin(), vi0.end(), li.begin());

	start = clock();
	copy(li.begin(), li.end(), vi.begin());
	sort(vi.begin(), vi.end());
	copy(vi.begin(), vi.end(), li.begin());
	end = clock();
	cout << "New method: " << (double)(end - start) / CLOCKS_PER_SEC << endl;

	return 0;
}
