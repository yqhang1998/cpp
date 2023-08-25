#include <iostream>

using namespace std;

class Action
{
	int a;
	public:
		Action(int i = 0) : a(i){}
		int val() const{return a;}
		virtual void f(char ch) const final{cout << val() << ch << "\n";}
};

class Bingo: public Action
{
	public:
		Bingo(int i = 0): Action(i){}
		virtual void f(char ch) const override{cout << val() << ch << "!\n";}
};

int main(void)
{
	Bingo b(10);
	b.f('@');
	//b.Action::f('@');
	
	return 0;
}

