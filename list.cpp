#include "list.h"

List::List()
{
    size = 0;
}
List::~List()
{
	if(size == 0)
	{
		cout << "List is empty\n";
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
	}
	Node* tail = head;
	tail = tail->next;
	while(tail != nullptr)
	{
		tail = tail->next;
	}
	tail = new Node(data);
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
int main()
{
	List list = List();
	list.pushBack(10);
	list.printList();
	Node* node = list.pop();
	list.printList();
	cout << node->value << "\n";

	return 0;

}
