int multiple(int m, int n);//函数声明

//求最小公倍数
int divisor(int m, int n)
{
	int j;
	j = m * n / multiple(m, n);
	return j;
}
