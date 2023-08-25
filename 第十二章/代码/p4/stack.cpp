#include "stack.h"

Stack::Stack(int n)
{
	pitems = new Item[n];
	size = n;

	top = 0;
}

Stack::Stack(const Stack &s)
{
	pitems = new Item[s.size];
	for(int i = 0; i < s.size; i++)
		pitems[i] = s.pitems[i];
	size = s.size;
	top = s.top;
}

Stack::~Stack()
{
	delete []pitems;
}

bool Stack::isempty() const
{
	return top == 0;
}

bool Stack::isfull() const
{
	return top == MAX;
}

bool Stack::push(Item &item)
{
	if(top < MAX)
	{
		pitems[top++] = item;
		return true;
	}
	else
		return false;
}

bool Stack::pop(Item &item)
{
	if(top > 0)
	{
		item = pitems[--top];
		return true;
	}
	else
		return false;
}

Stack &Stack::operator=(const Stack &s)
{
	if(this == &s)
		return *this;

	delete []pitems;

	pitems = new Item[s.size];
	for(int i = 0; i < s.size; i++)
		pitems[i] = s.pitems[i];

	size = s.size;
	top = s.top;
	return *this;
}
