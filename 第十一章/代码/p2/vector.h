#ifndef __VECTOR_H__
#define __VECTOR_H__

#include <iostream>

using namespace std;

namespace VECTOR
{
	class Vector
	{
		public:
			enum Mode{RECT, POL};
		private:
			double x;
			double y;
//			double mag;
//			double ang;
			Mode mode;
//			void set_mag();
//			void set_ang();
			void set_x(double mag, double ang);
			void set_y(double mag, double ang);
		public:
			Vector();
			Vector(double n1, double n2, Mode form = RECT);
			void reset(double n1, double n2, Mode form = RECT);
			double xval() const{return x;}
			double yval() const{return y;}
			double magval() const;
			double angval() const;
			void polar_mode();
			void rect_mode();

			Vector operator+(const Vector &b) const;
			Vector operator-(const Vector &b) const;
			Vector operator-() const;
			Vector operator*(double n) const;

			friend Vector operator*(double n, const Vector &a);
			friend ostream &operator<<(ostream &os, const Vector &v);
	};
}


#endif
