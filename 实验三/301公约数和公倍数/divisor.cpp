int multiple(int m, int n);//��������

//����С������
int divisor(int m, int n)
{
	int j;
	j = m * n / multiple(m, n);
	return j;
}
