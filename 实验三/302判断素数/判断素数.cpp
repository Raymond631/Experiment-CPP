#include<iostream>
#include"is_prime.h"
using namespace std;

int main()
{
	int k = 0;
	for (int m = 1; m <= 200; m++)
	{
		if (is_prime(m))
		{
			cout << m << " ";
			k++;
			if (k % 10 == 0)
			{
				cout << endl;
			}
		}
	}
	return 0;
}