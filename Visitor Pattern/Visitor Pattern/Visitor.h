#pragma once
class visitable {
public:
	visitable();
	~visitable();
	virtual void accept(class visitor *visitor) = 0;
};

class concreteVisitable : public visitable {
public:
	void accept(visitor *visitor);
};

class visitor {
public:
	visitor();
	~visitor();
	virtual int visit(visitable *visitable) = 0;
};

class concreteVisitor : public visitor {
public:
	int visit(visitable *visitable);
};

