#include "list.h"

List::List(int data)
{
	head = new Node(data);
    size = 1;
}
List::~List()
{
	Node* tail = new Node(0);
	while(head)
	{
		tail = head->next;
		delete head;
		head = tail;
	}
}
void List::pushBack(int data)
{
	Node* tail = head;
	while(tail->next)
	{
		tail = tail->next;
	}
	tail->next = new Node(data);
	size += 1;
}
void List::printList()
{
	Node* node = head;
	while(node != nullptr)
	{
		cout << node->value << " ";
		node = node->next;
	}
	cout << "\n";
}
int main()
{
	List list = List(5);
	list.pushBack(10);
	list.printList();

	return 0;

}
