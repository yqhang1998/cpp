#ifndef STRBAD_H
#define STRBAD_H

#include <iostream>

using namespace std;

class StringBad
{
	private:
		char *str;
		int len;
		static int num_strings;
	public:
		StringBad(const char *s);
		StringBad();
		StringBad(const StringBad &st);
		~StringBad();
		friend ostream &operator<<(ostream &os, const StringBad &st);
};


#endif