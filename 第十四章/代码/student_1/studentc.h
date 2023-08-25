#ifndef __STUDENTC_H__
#define __STUDENTC_H__

#include <iostream>
#include <string>
#include <valarray>

using namespace std;

class Student : private string, private valarray<double>
{
	private:
		typedef valarray<double> ArrayDb;
//		string name;
//		ArrayDb scores;//valarray<double> scores;
		ostream &arr_out(ostream &os) const;
	public:
		Student() : string("Null student"), ArrayDb(){}
		explicit Student(const string &s) : string(s), ArrayDb(){}
		explicit Student(int n) : string("Nully"), ArrayDb(n){}
		Student(const string &s, int n) : string(s), ArrayDb(n){}
		Student(const string &s, const ArrayDb &a) : string(s), ArrayDb(a){}
		Student(const string &s, const double *pd, int n) : string(s), ArrayDb(pd, n){}
		~Student(){}
		double Average() const;
		const string &Name() const;
		double &operator[](int n);  //stu[0] = 100;
		double operator[](int n) const; //a = stu[0];

		friend istream &operator>>(istream &is, Student &stu);
		friend istream &getline(istream &is, Student &stu);
		friend ostream &operator<<(ostream &os, const Student &stu);
};


#endif
