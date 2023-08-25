#include <iostream>
#include "stringbad.h"

void callme1(StringBad &rsb);
void callme2(StringBad sb);

int main(void)
{
	StringBad headline1("Hello world");
	StringBad headline2("Good morning");
	StringBad sports("I love you, Rick");

	cout << "headline1: " << headline1 << endl;
	cout << "headline2: " << headline2 << endl;
	cout << "sports: " << sports << endl;

	callme1(headline1);
	callme2(headline2);
	
	return 0;
}

void callme1(StringBad &rsb)
{
	cout << "String passed by reference:"  << rsb << endl;
}

void callme2(StringBad sb)
{
	cout << "String passed by value: " << sb << endl;
}
