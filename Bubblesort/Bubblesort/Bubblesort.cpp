#include "pch.h"
#include <iostream>

using namespace std;

void bubbleSort(int *, int);

#define arrLen sizeof(list)/sizeof(*list)

int main()
{
	int list[10];
	int length = arrLen;
	
	for (int i = 0; i < arrLen; i++) {
		list[i] = arrLen-i;
	}
	
	bubbleSort(list, length);

	for (int i = 0; i < arrLen; i++) {
		cout << list[i] << endl;
	}
}

void bubbleSort(int *list, int length) {
	int temp;
	for (int j = 0; j < length - 1; j++) {
		for (int i = 0; i < length - j - 1; i++) {
			if (list[i] > list[i + 1]) {
				temp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = temp;
			}
		}
	}
}