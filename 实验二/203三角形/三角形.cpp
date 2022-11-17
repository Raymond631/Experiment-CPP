#include<iostream>
using namespace std;

int main()
{
	double a, b, c, z;
	cout << "请输入三角形的3条边长：" << endl;
	cin >> a>>b>> c;
	if (a + b > c && b + c > a && a + c > b)
	{
		z = a + b + c;
		cout << "该三角形的周长为" << z << endl;
		if (a == b || b == c || a == c)
		{
			cout << "该三角形是等腰三角形" << endl;
		}
		else
		{
			cout << "该三角形不是等腰三角形" << endl;
		}
	}
	else
	{
		cout << "您输入的3条边无法组成三角形！" << endl;
	}
	return 0;
}