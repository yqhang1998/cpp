#include <iostream>
#include <queue>
#include <cstdlib>

using namespace std;

class Customer
{
	private:
		long arrive;
		int processtime;
	public:
		Customer(){arrive = processtime = 0;}
		void set(long when);
		long when() const{return arrive;}
		int ptime() const{return processtime;}
};
typedef Customer Item;

void Customer::set(long when)
{
	arrive = when;
	processtime = rand() % 3 + 1;
}

int main(void)
{
	int qs;
	Item temp;
	int i = 0;
	int customers = 0;

	cout << "Enter maximum size of queue: ";
	cin >> qs;

	queue<Item> lines;//Queue line(qs);

	while(lines.size() != qs)//while(!line.isfull())
	{
		temp.set(i++);
		lines.push(temp);//line.enqueue(temp);
		customers++;
	}
	cout << "Customers: " << customers << endl;

	while(lines.empty())//while(!line.isempty())
	{
		//line.dequeue(temp);
		temp = lines.front();
		lines.pop();
		customers--;
	}
	cout << "Now customers: " << customers << endl;

	return 0;
}
