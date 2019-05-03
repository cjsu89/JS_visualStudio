#include "pch.h"
#include "Visitor.h"

visitable::visitable(){}

visitable::~visitable(){}

void concreteVisitable::accept(visitor *visitor) {
	visitor->visit(this);
}