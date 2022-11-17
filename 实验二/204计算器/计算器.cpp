#include<iostream>
using namespace std;

int main()
{
	double a, b, c;
	char ch;
	cout << "请输入一个计算式：" << endl;
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
				cout << "除数不能为零！" << endl;
				break;
			}
			
		default:cout << "请输入正确的运算符！" << endl;
	}
	return 0;
}