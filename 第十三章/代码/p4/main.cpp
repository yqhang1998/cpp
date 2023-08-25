#include <iostream>
#include "bop.h"

int main(void)
{
	Port port1("ABC", "sweet", 200);
	cout << port1 << endl;
	cout << "--------------------" << endl;

	VintagePort vp("EFG", "vintage", 300, "Old Jack", 40);
	cout << vp << endl;
	cout << "--------------------" << endl;

	VintagePort vp2(vp);
	cout << vp2 << endl;
	cout << "--------------------" << endl;

	Port *p_port;
	p_port = &port1;
	p_port->Show();
	cout << "--------------------" << endl;

	p_port = &vp;
	p_port->Show();
	return 0;
}

