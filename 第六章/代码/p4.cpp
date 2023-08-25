#include <iostream>

using namespace std;

const int strsize = 40;
const int usersize = 4;

struct bop{
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;
};

bop user[usersize] =
	{
		{"Rick", "Level_A", "RR", 0},
		{"Jack", "Level_B", "JJ", 1},
		{"Micheal", "Level_C", "MM", 2},
		{"Rose", "Level_D", "RR", 0}
	};

void showmenu(void);
void print_by_fullname(void);
void print_by_title(void);
void print_by_bopname(void);
void print_by_pref(void);

int main(void)
{
	char input;

	showmenu();

	cin.get(input);

	while(input != 'q')
	{
		switch(input)
		{
			case 'a': print_by_fullname(); break;
			case 'b': print_by_title(); break;
			case 'c': print_by_bopname(); break;
			case 'd': print_by_pref(); break;
			default: cout << "Please enter character a, b, c, d, q:" << endl;
		}
		cin.get();
		cout << "Next input:";
		cin.get(input);
	}

	cout << "Bye!" << endl;

	return 0;
}

void showmenu(void)
{
	cout << "Benevolent Order of Programmer Report" << endl;
	cout << "a. display by name\t\t b. dispaly by title" << endl;
	cout << "c. display by bopname\t\t d. display by preference" << endl;
	cout << "q. quit" << endl;
}

void print_by_fullname(void)
{
	for(int i = 0; i < usersize; i++)
		cout << user[i].fullname << endl;
}

void print_by_title(void)
{
	for(int i = 0; i < usersize; i++)
		cout << user[i].title << endl;
}

void print_by_bopname(void)
{
	for(int i = 0; i < usersize; i++)
		cout << user[i].bopname << endl;

}

void print_by_pref(void)
{
	for(int i = 0; i < usersize; i++)
	{
		switch(user[i].preference)
		{
			case 0: cout << user[i].fullname << endl; break;
			case 1: cout << user[i].title << endl; break;
			case 2: cout << user[i].bopname << endl; break;
		}
	}
}
