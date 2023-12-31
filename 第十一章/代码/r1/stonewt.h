#ifndef __STONEWT_H__
#define __STONEWT_H__

#include <iostream>

using namespace std;

class Stonewt
{
	private:
		enum{Lbs_per_stn = 14};
		int stone;
		double pds_left;
		double pounds;
	public:
		//explicit Stonewt(double lbs);
		Stonewt(double lbs);
		Stonewt(int stn, double lbs);
		Stonewt();
		void show_lbs() const;
		void show_stn() const;
		Stonewt operator *(double mult);
};

#endif
