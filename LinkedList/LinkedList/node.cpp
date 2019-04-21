#include "pch.h"
#include <iostream>
#include "node.h"

using namespace std;

node::node() {}
node::~node() {}
List::List(){}
List::~List(){}

void List::add(int value)
{
	node* newnode = new node;

	newnode->value = value;
	newnode->next = head;
	head = newnode;

	cout << newnode->value << endl;
}

void List::remove()
{
	node* toBeDeleted = head;
	if (head->next != nullptr) {
		head = head->next;
		cout << head->value << endl;
	}

	delete toBeDeleted;
}