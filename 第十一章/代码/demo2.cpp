#include <iostream>

using namespace std;

class Num
{
	private:
		int n;
	public:
		Num();
		Num(int m);
		void operator=(int l);
};

Num::Num()
{
	n = 0;
	cout << "Hello world" << endl;
}

Num::Num(int m)
{
	n = m;
	cout << "Good morning" << endl;
}

void Num::operator=(int l)
{
	n = l;
	cout << "I love you, Rick" << endl;
}

int main(void)
{
	Num a;

	a = 10;  // a(10)

	return 0;
}
