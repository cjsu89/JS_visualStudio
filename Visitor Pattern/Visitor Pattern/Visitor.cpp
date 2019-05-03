#include "pch.h"
#include <iostream>
#include "Visitor.h"

using namespace std;

visitor::visitor(){}

visitor::~visitor(){}

int concreteVisitor::visit(visitable *visitable)
{
	cout << "This is a visit function" << endl;
	return 0;
}
