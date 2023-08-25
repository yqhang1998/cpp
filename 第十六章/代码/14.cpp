#include <iostream>
#include <string>
#include <map>
#include <iterator>
#include <algorithm>

using namespace std;

typedef int KeyType;
typedef pair<KeyType, string> Pair;
typedef multimap<KeyType, string> MapCode;

int main(void)
{
	MapCode codes;

	codes.insert(Pair(10, "Beijing"));
	codes.insert(Pair(21, "Shanghai"));
	codes.insert(Pair(22, "Tianjin"));
	codes.insert(Pair(23, "Chongqing"));
	codes.insert(Pair(24, "Shenyang"));
	codes.insert(Pair(22, "Nanjing"));

	cout << "Number of cities with area code 22: " << codes.count(22) << endl;

	MapCode::iterator it;
	cout << "Area code	city" << endl;
	for(it = codes.begin(); it != codes.end(); it++)
		cout << "	" << (*it).first << "	" << (*it).second << endl;

	cout << "Cities with area code 22: " << endl;
	pair<MapCode::iterator, MapCode::iterator> range = codes.equal_range(22);
	for(it = range.first; it != range.second; it++)
		cout << (*it).second << endl;

	return 0;
}
