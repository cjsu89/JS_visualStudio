#include "pch.h"
#include <iostream>
#include "Visitor.h"

using namespace std;

int main()
{
	concreteVisitable visitable;
	concreteVisitor visitorA;
	concreteVisitor visitorB;
	//visitor *visitorA = new concreteVisitor();
	//visitor *visitorB = new concreteVisitor();


	visitable.accept(&visitorA);
	visitable.accept(&visitorB);
}