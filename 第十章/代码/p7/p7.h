#ifndef __P7_H__
#define __P7_H__

#include <iostream>
#include <cstring>

using namespace std;

const int SIZE = 19;

class plorg
{
	private:
		char name[SIZE];
		int CI;
	public:
		plorg(const char str[] = "Plorga", int ci = 50);
		void reset(int ci);
		void show() const;
};

#endif
