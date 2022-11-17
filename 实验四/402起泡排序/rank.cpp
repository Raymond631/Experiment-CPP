void rank1(double list1[10])
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < 9; j++)
		{
			if (list1[j] > list1[j + 1])
			{
				double a;
				a = list1[j];
				list1[j] = list1[j + 1];
				list1[j + 1] = a;
				changed = true;
			}
		}
	} while (changed);
}