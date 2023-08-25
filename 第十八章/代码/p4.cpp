#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;

template<class T>
class TooBig
{
	private:
		T cutoff;
	public:
		TooBig(const T &t) : cutoff(t){}
		bool operator()(const T &v){return v > cutoff;}
};

/*
void outint(int n)
{
	cout << n << " ";
}
*/
auto OutInt = [](int n){cout << n << " ";};

int main(void)
{
	TooBig<int> f100(100);
	int vals[10] = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};

	list<int> yadayada(vals, vals + 10);
	list<int> etcetera(vals, vals + 10);

	cout << "Origianl lists: " << endl;
	for_each(yadayada.begin(), yadayada.end(), OutInt);
	cout << endl;
	for_each(etcetera.begin(), etcetera.end(), OutInt);
	cout << endl;

	cout << "Trimmed lists: " << endl;
	//f100(50), f100(100), f100(180)....
	//yadayada.remove_if(f100);
	yadayada.remove_if([](int n){return n > 100;});
	for_each(yadayada.begin(), yadayada.end(), OutInt);
	cout << endl;

	//etcetera.remove_if(TooBig<int>(200));
	etcetera.remove_if([](int n){return n > 200;});
	for_each(etcetera.begin(), etcetera.end(), OutInt);
	cout << endl;

	return 0;
}
