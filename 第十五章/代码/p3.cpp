#include <iostream>
#include <cstdlib>
#include <cmath>
#include <stdexcept>

using namespace std;

double hmean(double a, double b);
double gmean(double a, double b);

class bad_mean : public logic_error
{
	private:
		double v1;
		double v2;
	public:
		bad_mean(double a = 0, double b = 0, const string &what_arg = "mean, error") : v1(a), v2(b), logic_error(what_arg){}
		virtual void show() const;
};

class bad_hmean : public bad_mean
{
	public:
		bad_hmean(double a = 0, double b = 0, const string &what_arg = "hmean, invalid arguments") : bad_mean(a, b, what_arg){}
		void show() const;
};

class bad_gmean : public bad_mean
{
	public:
		bad_gmean(double a = 0, double b = 0, const string &what_arg = "gmean, invalid arguments") : bad_mean(a, b, what_arg){}
		void show() const;
};

void bad_mean::show() const
{
	cout << "v1 = " << v1 << ", v2 = " << v2 << endl;
}

void bad_hmean::show() const
{
	cout << what() << endl;
	bad_mean::show();
}

void bad_gmean::show() const
{
	cout << what() << endl;
	bad_mean::show();
}


int main(void)
{
	double x, y, z;

	cout << "Enter two numbers: ";
	while(cin >> x >> y)
	{
		try
		{
			z = hmean(x, y);
			cout << "Harmonic mean of " << x << " and " << y << " is " << z << endl;
			z = gmean(x, y);
			cout << "Geometric mean of " << x << " and " << y << " is " << z << endl;
		}
		catch(bad_mean &b)
		{
			if(typeid(bad_hmean) == typeid(b))
			{
				b.show();
				break;
			}
			if(typeid(bad_gmean) == typeid(b))
			{
				b.show();
				break;
			}
		}
/*
		catch(bad_hmean &bh)
		{
			cout << bh.what();//bh.mesg();//cout << s << endl;
			cout << "Enter a new pair of arguments:";
			continue;
		}
		catch(bad_gmean &bg)
		{
			cout << bg.what();
			//cout << "Value used: " << bg.v1 << ", " << bg.v2 << endl;
			cout << "Sorry, quit now" << endl;
			break;
		}
*/

		cout << "Enter next set of number: ";
	}

	return 0;
}

double hmean(double a, double b)
{
	if(a == -b)
		throw bad_hmean(a, b);

	return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
	if(a < 0 || b < 0)
		throw bad_gmean(a, b);
	return sqrt(a*b);
}
