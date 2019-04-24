#include "pch.h"
#include <iostream>
#include "observer.h"

using namespace std;

void subject::regist(observer *user) {
	vector.push_back(user);
}
void subject::unregist() {}
void subject::notify() {
	for (auto element : vector)
		element->update();
}
void subject::setState(int value){
	this->value = value;
	notify(); 
}
int subject::getState() { return value; }

observer::observer(subject *subject){
	subject->regist(this);
	model = subject;
}
observer::~observer(){}

void observer1::update(){
	cout << "user1: subject value is changed into " << model->getState() << endl;
}

void observer2::update(){
	cout << "user2: subject value is changed into " << model->getState() << endl;
}
