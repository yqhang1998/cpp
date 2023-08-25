#include <iostream>
#include "tabtenn0.h"

using namespace std;

int main(void)
{
	TableTennisPlayer player1{"Chuck", "Blizzard", true};
	TableTennisPlayer player2{"Tara", "Boomdea", false};
	
	player1.Name();
	if(player1.HasTable())
		cout << ": has a table." << endl;
	else
		cout << ": hasn't a table." << endl;
		
	player2.Name();
	if(player2.HasTable())
		cout << ": has a table." << endl;
	else
		cout << ": hasn't a table." << endl;
	
	return 0;
}
