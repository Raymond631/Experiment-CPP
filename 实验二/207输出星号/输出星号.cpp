#include<iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 5; i++)//��ӡ5��
	{
		for (int k = 5; k > i; k--)//��ӡ�ո�
		{
			cout << " ";
		}
		for (int j = 1; j<=i; j++)//��ӡ*
		{
			cout<< "*";
		}
		cout << endl;
	}
	return 0;
}