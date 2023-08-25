#include <iostream>
#include <string>

using namespace std;

const char DONE[] = "done";

int main(void)
{
	string words;
	int counter = 0;

	cout << "Enter words (to stop, type the word done):" << endl;
	
	do
	{
		cin >> words;
		cin.get();
		counter++;
	}while(words != DONE);

	cout << "You entered a total of " << counter - 1 << " words." << endl;

	return 0;
}
