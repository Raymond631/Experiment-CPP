#include<iostream>
using namespace std;

int main()
{
	double a, b, c;
	char ch;
	cout << "������һ������ʽ��" << endl;
	cin >> a >> ch >> b;
	switch (ch)
	{
		case'+':
			c = a + b; 
			cout << a << ch << b << "=" << c << endl;
			break;
		case'-':
			c = a - b; 
			cout << a << ch << b << "=" << c << endl;
			break;
		case'*':
			c = a * b; 
			cout << a << ch << b << "=" << c << endl; 
			break;
		case'/':
			if (b != 0)
			{
				c = a / b; 
				cout << a << ch << b << "=" << c << endl;
				break;
			}
			else
			{
				cout << "��������Ϊ�㣡" << endl;
				break;
			}
			
		default:cout << "��������ȷ���������" << endl;
	}
	return 0;
}