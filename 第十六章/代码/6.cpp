#include <iostream>
#include <memory>
#include <string>

using namespace std;

int main(void)
{
	unique_ptr<string> films[5] =
	{
		unique_ptr<string>(new string("ABC")),
		unique_ptr<string>(new string("DEF")),
		unique_ptr<string>(new string("GHI")),
		unique_ptr<string>(new string("JKL")),
		unique_ptr<string>(new string("XYZ"))		
	};

	unique_ptr<string> pwin;
	pwin = films[2];

	for(int i = 0; i < 5; i++)
		cout << *films[i] << endl;

	cout << "The winner is " << *pwin << endl;

	return 0;
}
