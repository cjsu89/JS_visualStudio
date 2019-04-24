#pragma once
#include <vector>

using namespace std;

class subject {
	vector<class observer *> vector;
	int value;
public:
	void regist(observer *user);
	void unregist();
	void notify();
	void setState(int value);
	int getState();
};

class observer{
protected:
	subject *model;
public:
	observer(subject *subject);
	~observer();
	virtual void update() = 0;
};

class observer1 : public observer {
public:
	observer1(subject *subject) : observer(subject) {};
	void update();
};

class observer2 : public observer {
public:
	observer2(subject *subject) : observer(subject) {};
	void update();
};
