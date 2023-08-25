#include <iostream>
#include "stock00.h"

void Stock::acquire(const std::string &co, long n, double pr)
{
	company = co;
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

void Stock::show()
{
	std::cout << "Company: " << company << std::endl;
	std::cout << "Shares: " << shares << std::endl;
	std::cout << "Share price: " << share_val << std::endl;
	std::cout << "Total worth: " << total_val << std::endl;
}

