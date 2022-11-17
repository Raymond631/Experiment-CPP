#include<iostream>
using namespace std;

int main()
{
	int num = 2;
	int sum = 2;
	int day = 1;

	while (num <= 100)
	{
		day++;
		num = num * 2;
		sum += num;
	}
	day = day - 1;
	sum = sum - num;

	double average_money;
	average_money = sum * 0.8 / day;
	cout << "平均每天花" << average_money << "元" << endl;

	return 0;
}