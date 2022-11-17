#include<iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 5; i++)//打印5行
	{
		for (int k = 5; k > i; k--)//打印空格
		{
			cout << " ";
		}
		for (int j = 1; j<=i; j++)//打印*
		{
			cout<< "*";
		}
		cout << endl;
	}
	return 0;
}