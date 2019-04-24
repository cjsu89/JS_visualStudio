#include "pch.h"
#include <iostream>
#include "observer.h"

using namespace std;

int main()
{
	subject subject;
	observer1 *user1 = new observer1(&subject);
	observer2 *user2 = new observer2(&subject);

	subject.setState(1);
	subject.setState(2);
	subject.setState(3);
	
}