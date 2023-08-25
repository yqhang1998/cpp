#include "list.h"

List::List()
{
	top = 0;
}

bool List::isempty() const
{
	return top == 0;
}

bool List::isfull() const
{
	return top == MAX;
}

bool List::add(Item &item)
{
	if(top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}

void List::visit(void (*pf)(Item &))
{
	for(int i = 0; i < top; i++)
		pf(items[i]);
}

void visit_item(Item &item)
{
	cout << "Item = " << item << endl;
}
