int num(int i)
{
	int value;
	if (i == 1) value = 1;
	else value = (num(i-1) + 1) * 2;

	return value;
}