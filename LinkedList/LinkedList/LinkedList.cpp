#include "pch.h"
#include <iostream>
#include <string.h>
#include "node.h"

using namespace std;

int main()
{
	List a;

	a.add(10);
	a.add(20);
	a.add(30);
	a.add(40);
	a.add(50);

	cout << endl;

	a.remove();
	a.remove();
	a.remove();
	a.remove();
	a.remove();
}