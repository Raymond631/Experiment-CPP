#include<iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "请输入两个正整数：" << endl;
	cin >> a >> b;

	//求最大公约数
	int i;
	for (i = a; ; i--)//从最大的开始穷举即可求得最大公约数
	{
		if (a % i == 0 && b % i == 0)
			break;
	}
	cout << a << "与" << b << "的最大公约数为" << i << endl;

	//求最小公倍数
	int j;
	j = a * b / i;//套用数学公式
	cout << a << "与" << b << "的最小公倍数为" << j << endl;

	return 0;
}