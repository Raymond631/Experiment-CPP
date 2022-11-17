#include<iostream>
using namespace std;

void arrange(int p[], int size);

int main()
{
	int size, a;
	cout << "请输入数组长度：";
	cin >> size;
	int* p = new int[size];

	cout << "请输入数组元素：" << endl;
	for (int i = 0; i < size; i++)
		cin >> *(p + i);
	cout << "动态调试" << endl;
	cout << "请输入你想要输出的数组元素：";
	cin >> a;
	cout << "p[" << a - 1 << "] = " << *(p + a - 1) << endl;
	arrange(p, size);
	cout << "数组元素从小到大排序后为：";
	for (int b = 0; b < size; b++)
		cout << *(p + b) << " ";
	cout << endl;

	delete p;
	return 0;
}

void arrange(int p[], int size)
{
	int temp;
	for (int n = 0; n < size; n++)
		for (int m = 0; m < size - 1; m++)
			if (*(p + m) > *(p + m + 1))
			{
				temp = *(p + m);
				*(p + m) = *(p + m + 1);
				*(p + m + 1) = temp;
			}
}