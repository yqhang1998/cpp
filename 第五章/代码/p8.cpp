#include <iostream>
#include <cstring>

using namespace std;

const char DONE[] = "done";

int main(void)
{
	char words[20];
	int counter = 0;

	cout << "Enter words (to stop, type the word done):" << endl;
	
	do
	{
		cin >> words;
		cin.get();
		counter++;
	}while(strcmp(words, DONE) != 0);

	cout << "You entered a total of " << counter - 1 << " words." << endl;

	return 0;
}
