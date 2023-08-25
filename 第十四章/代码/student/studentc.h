#ifndef __STUDENTC_H__
#define __STUDENTC_H__

#include <iostream>
#include <string>
#include <valarray>

using namespace std;

class Student
{
	private:
		typedef valarray<double> ArrayDb;
		string name;
		ArrayDb scores;//valarray<double> scores;
	public:
		Student() : name("Null student"), scores(){}
		explicit Student(const string &s) : name(s), scores(){}
		explicit Student(int n) : name("Nully"), scores(n){}
		Student(const string &s, int n) : name(s), scores(n){}
		Student(const string &s, const ArrayDb &a) : name(s), scores(a){}
		Student(const string &s, const double *pd, int n) : name(s), scores(pd, n){}
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
