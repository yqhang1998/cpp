#ifndef __GOLF_H__
#define __GOLF_H__

#include <iostream>
#include <cstring>

using namespace std;

const int Len = 40;

class golf
{
	private:
		char fullname[Len];
		int handicap;
	public:
		golf(const char *name, int hc);
		golf();
		void sethandicap(int hc);
		void showgolf() const;
};


#endif

