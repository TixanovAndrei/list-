#ifndef _LIST_H_
#define _LIST_H_

struct Node {
    int value;
    Node* next;
    Node(int val): value(val), next(nullptr){}
};

class List {
public:
    List();
    ~List();
    void push(int data);
    int pop();
    void pushBack(int data);
    int popBack();
    void deleteList();
    Node* search(int k);
private:
    int size;
    Node *head;
};

#endif