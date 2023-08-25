#include <iostream>
#include "stack.h"
#include <cctype>

using namespace std;

int main(void)
{
	char ch;
	customer cust;
	Stack st;
	double sum = 0.0;

	cout << "Please etner A to push to stack, \n"
	     << "P to pop from stack, Q to quit.\n";

	while(cin >> ch && toupper(ch) != 'Q')
	{
		while(cin.get() != '\n')
			continue;

		switch(ch)
		{
			case 'A':
			case 'a':
				cout << "Enter a customer's fullname you want to push to stack:\n";
				cin.getline(cust.fullname, 35);
				cout << "Enter a customer payment: ";
				cin >> cust.payment;
				if(st.isfull())
					cout << "Stack already full" << endl;
				else
					st.push(cust);
				break;
			case 'P':
			case 'p':
				if(st.isempty())
					cout << "Stack is empty" << endl;
				else
				{
					st.pop(cust);
					sum += cust.payment;
					cout << cust.fullname << " is poped" << endl;
					cout << cust.payment << " is poped" << endl;
					cout << "sum paymnet = " << sum << endl;
				}
				break;
		}
		cout << "Please etner A to push to stack, \n"
	     	     << "P to pop from stack, Q to quit.\n";
	}

	return 0;
}
