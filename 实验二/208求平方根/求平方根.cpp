#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double a,x1, x2;
	cout << "�����뱻��������" << endl;
	cin >> a;
	x1 = a;

	if (a >= 0)
	{
		while (1)
		{
			x2 = (x1 + a / x1) / 2;
			if (x1 - x2 <= 1e-10)
			{
				cout << a << "��ƽ����Ϊ" << setprecision(11) << x2 << endl;
				break;
			}
			x1 = x2;
		}
	}
	else cout << "����û��ƽ������" << endl;

	return 0;
}