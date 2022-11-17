#include<iostream>
#include"merge.h"
using namespace std;

int main()
{
	int size1, size2, size3;

	cout << "Enter list1: ";
	cin >> size1;
	int* list1 = new int[size1];
	for (int i = 0; i < size1; i++)
		cin >> list1[i];

	cout << "Enter list2: ";
	cin >> size2;
	int* list2 = new int[size2];
	for (int i = 0; i < size2; i++)
		cin >> list2[i];

	size3 = size1 + size2;
	int* list3 = new int[size3];
	merge(list1, size1, list2, size2, list3);

	cout << endl;

	delete[]list1;
	delete[]list2;
	delete[]list3;
	return 0;
}
