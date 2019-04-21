#pragma once
class node
{
		int value;
		node *next;
		friend class List;
public:
		node();
		~node();
};

class List
{
	node* head;

	public:
		List();
		~List();
		void add(int value);
		void remove();
};
