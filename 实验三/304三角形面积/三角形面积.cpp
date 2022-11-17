#include<iostream>
#include"mytriangle.h"
using namespace std;

int main()
{
	double a, b, c;
	cout << "请输入三角形边长：" << endl;
	cin >> a >> b >> c;

	if (is_valid(a, b, c))
	{
		cout << "三角形的面积为" << area(a, b, c) << endl;
	}
	else cout << "您输入的三条边长，无法组成三角形！" << endl;
	return 0;
}