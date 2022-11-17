#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double a,x1, x2;
	cout << "请输入被开方数：" << endl;
	cin >> a;
	x1 = a;

	if (a >= 0)
	{
		while (1)
		{
			x2 = (x1 + a / x1) / 2;
			if (x1 - x2 <= 1e-10)
			{
				cout << a << "的平方根为" << setprecision(11) << x2 << endl;
				break;
			}
			x1 = x2;
		}
	}
	else cout << "负数没有平方根！" << endl;

	return 0;
}