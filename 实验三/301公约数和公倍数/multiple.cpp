//�����Լ��
int multiple(int m,int n)
{
	int i;
	for (i = m; ; i--)
	{
		if (m % i == 0 && n % i == 0)
			break;
	}
	return i;
}