#include<iostream>
using namespace std;

int main()
{
	double a[10];
	int i, j;
	cout << "ÇëÊäÈë10¸öÊý£º" << endl;
	for (i = 0; i < 10; i++)
	{
		cin>>a[i];
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++) 
		{
			if (a[j] == a[i] && j != i)
			{
				a[j] = 0;
			}	
		}
	}
	for (i = 0; i < 10; i++)
	{
		if (a[i] != 0)
		{
			cout << a[i] << " ";

		}
	}
	return 0;
}
