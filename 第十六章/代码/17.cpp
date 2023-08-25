#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(void)
{
	string letters;

	cout << "Enter the letter group (enter quit to quit): ";

	while(cin >> letters && letters != "quit")
	{
		cout << "Permutation: " << endl;
		sort(letters.begin(), letters.end());
		cout << letters << endl;
		while(next_permutation(letters.begin(), letters.end()))
			cout << letters << endl;

		cout << "Enter the next letter group (enter quit to quit):";
	}

	return 0;
}
