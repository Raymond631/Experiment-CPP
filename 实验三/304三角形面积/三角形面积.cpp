#include<iostream>
#include"mytriangle.h"
using namespace std;

int main()
{
	double a, b, c;
	cout << "�����������α߳���" << endl;
	cin >> a >> b >> c;

	if (is_valid(a, b, c))
	{
		cout << "�����ε����Ϊ" << area(a, b, c) << endl;
	}
	else cout << "������������߳����޷���������Σ�" << endl;
	return 0;
}