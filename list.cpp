#include "list.h"

List::List()
{
    size = 0;
}
List::~List()
{
	if(size == 0)
	{
		return;
	}
	Node* tail = new Node(0);
	while(head)
	{
		tail = head->next;
		delete head;
		head = tail;
	}
	delete tail;
}
void List::pushBack(int data)
{
	if(size == 0)
	{
		head = new Node(data);
		size = 1;
		return;
	}
	Node* tail = head;
	while(tail->next != nullptr)
	{
		tail = tail->next;
	}
	tail->next = new Node(data);
	size += 1;
}
void List::printList()
{
	if(size == 0)
	{
		cout << "List is empty" << "\n";
		return;
	}
	Node* node = head;
	cout << node->value << " ";
	node = node->next;
	while(node != nullptr)
	{
		cout << node->value << " ";
		node = node->next;
	}
	cout << "\n";
}
Node* List::pop()
{
	if(size == 0)
	{
		cout << "List is empty\n";
		return nullptr;
	}
	Node* ans = head;
	head = head->next;
	size -= 1;
	return ans;
}
Node* List::popBack()
{
	if(size == 0)
	{
		cout << "List is empty\n";
		return nullptr;
	}
	Node* tail = head;
	while(tail->next != nullptr)
	{
		tail = tail->next;
	}
	size -= 1;
	return tail;
}
bool List::isEmpty()
{
	if(size == 0)
		return 1;
	return 0;
}
int main()
{
	List list = List();
	list.pushBack(2);
	list.pushBack(3);
	list.printList();
	cout << list.popBack()->value << "\n";
	cout << list.pop()->value << "\n";
	list.printList();
	list.~List();
	return 0;
}
