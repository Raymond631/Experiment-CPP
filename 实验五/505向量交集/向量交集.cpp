#include<iostream>
#include<vector>
#include<string>
using namespace std;

template<typename T>
vector<T> intersection(const vector<T>& v1, const vector<T>& v2)
{
	vector<T> common;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (v1[i] == v2[j])
			{
				common.push_back(v1[i]);
			}
		}
	}
	return (common);
}

int main()
{
	vector<string> text1;
	vector<string> text2;
	string word;
	cout << "����������1��������5���ַ�����" << endl;
	for (int i = 0; i < 5; i++)
	{
		if (cin >> word)
			text1.push_back(word);
	}

	cout << "����������2��������5���ַ�����" << endl;
	for (int i = 0; i < 5; i++)
	{
		if (cin >> word)
			text2.push_back(word);
	}

	cout << "����1������2�Ĺ�ͬԪ��Ϊ��";
	for (auto& r : intersection(text1, text2))
	{
		cout << r << " ";
	}

	return 0;
}