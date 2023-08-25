#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

#define SIZE	390000

bool f3(int x){return x % 3 == 0;}
bool f13(int x){return x % 13 == 0;}

int main(void)
{
	vector<int> numbers(SIZE);
	int count3, count13;
	count3 = count13 = 0;

	//method 3
	numbers.resize(SIZE);
	generate(numbers.begin(), numbers.end(), rand);
	cout << "Sample size = " << SIZE << endl;
	count3 = count_if(numbers.begin(), numbers.end(), [](int x){return x % 3 == 0;});
	cout << "Count of numbers divisible by 3: " << count3 << endl;


	for_each(numbers.begin(), numbers.end(), [&count13](int x){count13 += x % 13 == 0;});
	cout << "Count of numbers divisible by 13: " << count13 << endl;

	count3 = count13 = 0;
	for_each(numbers.begin(), numbers.end(), [&](int x){count3 += x % 3 == 0; count13 += x % 13 == 0;});
	cout << "Count of numbers divisible by 3: " << count3 << endl;
	cout << "Count of numbers divisible by 13: " << count13 << endl;	

	return 0;
}
