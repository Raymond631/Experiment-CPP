#include<iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "������������������" << endl;
	cin >> a >> b;

	//�����Լ��
	int i;
	for (i = a; ; i--)//�����Ŀ�ʼ��ټ���������Լ��
	{
		if (a % i == 0 && b % i == 0)
			break;
	}
	cout << a << "��" << b << "�����Լ��Ϊ" << i << endl;

	//����С������
	int j;
	j = a * b / i;//������ѧ��ʽ
	cout << a << "��" << b << "����С������Ϊ" << j << endl;

	return 0;
}