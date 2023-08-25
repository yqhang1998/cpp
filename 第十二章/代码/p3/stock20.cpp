#include <iostream>
#include "stock20.h"
#include <cstring>

Stock::Stock()
{
	company = NULL;
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}


Stock::Stock(const char *co, long n, double pr)
{
	//company = co;
	company = new char[strlen(co) + 1];
	strcpy(company, co);

	if(n < 0)
	{
		std::cout << "Numer of shares can't be negative; " << company << " shares set to be 0." << std::endl;
		shares = 0;
	}
	else
		shares = n;

	share_val = pr;

	set_tot();
}

Stock::~Stock()
{
	delete []company;
}

void Stock::buy(long num, double price)
{
	if(num < 0)
	{
		std::cout << "Numer of shares can't be negative, Transaction is aborted" << std::endl;
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(long num, double price)
{
	using std::cout;

	if(num < 0)
	{
		std::cout << "Numer of shares can't be negative, Transaction is aborted" << std::endl;
	}
	else if(num > shares)
	{
		cout << "You can't sell more than you have! Transaction is aborted." << std::endl;
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price)
{
	share_val = price;
	set_tot();
}

ostream &operator<<(ostream &os, const Stock &s)
{
	os << "Company: " << s.company << endl;
	os << "Shares: " << s.shares << endl;
	os << "Share price: " << s.share_val << endl;
	os << "Total worth: " << s.total_val << endl;
}

const Stock & Stock::topval(const Stock &s) const
{
	if(s.total_val > total_val)  //total_val == this->total_val
		return s;
	else
		return *this;
}
