#ifndef __STOCK20__H__
#define __STOCK20__H__

#include <string>

using namespace std;

class Stock
{
	private:
		char *company;
		long shares;
		double share_val;
		double total_val;
		void set_tot() {total_val = shares * share_val;}
	public:
		Stock();
		Stock(const char *co, long n, double pr);
		~Stock();
		void buy(long num, double price);
		void sell(long num, double price);
		void update(double price);
		//void show() const;
		friend ostream &operator<<(ostream &os, const Stock &s);
		const Stock &topval(const Stock &s) const;
};


#endif
