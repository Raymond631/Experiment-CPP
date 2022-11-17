#include<iostream>
using namespace std;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int temp;
	for (int j = 0; j < size1; j++)
		list3[j] = list1[j];
	for (int k = 0; k < size2; k++)
		list3[size1 + k] = list2[k];
	cout << "The merged list is : ";

	for (int m = 0; m < (size1 + size2) - 1; m++)
		for (int b = 0; b < (size1 + size2) - 1; b++)
			if (list3[b] > list3[b + 1])
			{
				temp = list3[b];
				list3[b] = list3[b + 1];
				list3[b + 1] = temp;
			}
	for (int a = 0; a < (size1 + size2); a++)
		cout << list3[a] << " ";
}