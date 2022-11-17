#include<iostream>
#include "multiple.h"
#include "divisor.h"
using namespace std;

int main()
{
	int a, b,i,j;
	cout << "请输入两个正整数：" << endl;
	cin >> a >> b;

	i = multiple(a, b);
	cout << a << "与" << b << "的最大公约数为" << i << endl;
	j = divisor(a, b);
	cout << a << "与" << b << "的最小公倍数为" << j << endl;

	return 0;
}