#include<iostream>
#include"rank1.h"
using namespace std;

int main()
{
	double list[10];
	cout << "ÇëÊäÈë10¸öÊı£º" << endl;
	for (int i = 0; i <= 9; i++)
	{
		cin >> list[i];
	}

	rank1(list);

	for (int i = 0; i <= 9; i++)
	{
		cout << list[i] << " ";
	}
	return 0;
}