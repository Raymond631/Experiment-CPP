#include<iostream>
using namespace std;

class cuboid
{
private:
	double length;
	double width;
	double height;
public:
	void set_cuboid()
	{
		cin >> length;
		cin >> width;
		cin >> height;
	}
	void volume()
	{
		double v;
		v = length * width * height;
		cout << "v=" << v << endl;
	}
};

int main()
{
	cuboid a;
	cout << "�����볤����a�ĳ���ߣ�";
	a.set_cuboid();
	a.volume();

	cuboid b;
	cout << "�����볤����b�ĳ���ߣ�";
	b.set_cuboid();
	b.volume();

	cuboid c;
	cout << "�����볤����c�ĳ���ߣ�";
	c.set_cuboid();
	c.volume();
	
	return 0;
}