#include<iostream>
#include "multiple.h"
#include "divisor.h"
using namespace std;

int main()
{
	int a, b,i,j;
	cout << "������������������" << endl;
	cin >> a >> b;

	i = multiple(a, b);
	cout << a << "��" << b << "�����Լ��Ϊ" << i << endl;
	j = divisor(a, b);
	cout << a << "��" << b << "����С������Ϊ" << j << endl;

	return 0;
}