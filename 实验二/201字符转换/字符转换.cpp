#include<iostream>
using namespace std;

int main()
{
	char ch,CH;
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û£º" << endl;
	cin >> ch;
	if (ch >= 97 && ch <= 122)
	{
		CH = ch - 32;
		cout << CH << endl;
	}
	else
	{
		CH = ch + 1;
		cout << (int)CH << endl;
	}
	
	


	return 0;
}