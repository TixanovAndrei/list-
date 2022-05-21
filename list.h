#ifndef _LIST_H_
#define _LIST_H_
#include <cstring>
#include <iostream>
#include <memory>
using namespace std;

struct Node {
    int value;
    Node* next = nullptr;
    Node(int data, Node* nextNode)
    {
        this->value = data;
        this->next = nextNode;
    }
    Node(int data)
    {
        this->value = data;
    }
    Node() =default;
};

class List {
public:
    List(int data);
    ~List();
    int pop();
    void printList();
    void pushBack(int data);
    int popBack();
    Node* search(int k);
    int getSize(){return size;}
    Node* getHead(){return head;}
private:


    int size;
    Node* head = nullptr;
};

#endif