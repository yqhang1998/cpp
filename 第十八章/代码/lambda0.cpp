#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

#define SIZE1	39
#define SIZE2 	3900
#define SIZE3	390000

bool f3(int x){return x % 3 == 0;}
bool f13(int x){return x % 13 == 0;}

int main(void)
{
	vector<int> numbers(SIZE1);

	//method1
	srand(time(0));
	generate(numbers.begin(), numbers.end(), rand);
	cout << "Sample size = " << SIZE1 << endl;
	int count3 = count_if(numbers.begin(), numbers.end(), f3);
	cout << "Count of numbers divisible by 3: " << count3 << endl;
	int count13 = count_if(numbers.begin(), numbers.end(), f13);
	cout << "Count of numbers divisible by 13: " << count13 << endl;

	//method 2
	numbers.resize(SIZE2);
	generate(numbers.begin(), numbers.end(), rand);
	cout << "Sample size = " << SIZE2 << endl;
	class f_mod
	{
		private:
			int dv;
		public:
			f_mod(int d = 1) : dv(d){}
			bool operator()(int x){return x % dv == 0;}
	};
	count3 = count_if(numbers.begin(), numbers.end(), f_mod(3));
	cout << "Count of numbers divisible by 3: " << count3 << endl;
	count13 = count_if(numbers.begin(), numbers.end(), f_mod(13));
	cout << "Count of numbers divisible by 13: " << count13 << endl;

	//method 3
	numbers.resize(SIZE3);
	generate(numbers.begin(), numbers.end(), rand);
	cout << "Sample size = " << SIZE3 << endl;
	count3 = count_if(numbers.begin(), numbers.end(), [](int x){return x % 3 == 0;});
	cout << "Count of numbers divisible by 3: " << count3 << endl;
	count13 = count_if(numbers.begin(), numbers.end(), [](int x){return x % 13 == 0;});
	cout << "Count of numbers divisible by 13: " << count13 << endl;
	

	return 0;
}
