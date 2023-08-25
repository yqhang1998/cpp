#ifndef __DMA_H__
#define __DMA_H__

#include <iostream>

using namespace std;

class ABC
{
	private:
		char *label;
		int rating;
	public:
		ABC(const char *l = "null", int r = 0);
		ABC(const ABC &rs);
		virtual ~ABC();
		ABC &operator=(const ABC &s);
		friend ostream &operator<<(ostream &os, const ABC &rs);
		virtual void View() const;	
};

class baseDMA : public ABC
{
	public:
		baseDMA(const char *l = "null", int r = 0);
		baseDMA(const baseDMA &rs);
		virtual void View() const;
};

class lacksDMA : public ABC
{
	private:
		enum{COL_LEN = 40};
		char color[COL_LEN];
	public:
		lacksDMA(const char *l = "null", int r = 0, const char *c = "blank");
		lacksDMA(const ABC &rs, const char *c = "blank");
		friend ostream &operator<<(ostream &os, const lacksDMA &rs);
		virtual void View() const;
};

class hasDMA : public ABC
{
	private:
		char *style;
	public:
		hasDMA(const char *l = "null", int r = 0, const char *s = "none");
		hasDMA(const ABC &rs, const char *s);
		hasDMA(const hasDMA &hs);
		~hasDMA();
		hasDMA &operator=(const hasDMA &hs);
		friend ostream &operator<<(ostream &os, const hasDMA &rs);
		virtual void View() const;
};

#endif
