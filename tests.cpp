#include "list.cpp"

int main()
{
	list l1 = list();
	l1.push(2);
	l1.push(3);
	list l2 = list();
	l2.pushBack(0);
	l2 = l1;
	l1.printList();
	l2.printList();
	l1.~list();
	l2.~list();
	return 0;
}