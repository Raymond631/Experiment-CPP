#include<iostream>
using namespace std;

int main()
{
	double a, b, c, z;
	cout << "�����������ε�3���߳���" << endl;
	cin >> a>>b>> c;
	if (a + b > c && b + c > a && a + c > b)
	{
		z = a + b + c;
		cout << "�������ε��ܳ�Ϊ" << z << endl;
		if (a == b || b == c || a == c)
		{
			cout << "���������ǵ���������" << endl;
		}
		else
		{
			cout << "�������β��ǵ���������" << endl;
		}
	}
	else
	{
		cout << "�������3�����޷���������Σ�" << endl;
	}
	return 0;
}