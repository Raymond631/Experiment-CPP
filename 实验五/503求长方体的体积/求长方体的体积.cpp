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
	cout << "请输入长方体a的长宽高：";
	a.set_cuboid();
	a.volume();

	cuboid b;
	cout << "请输入长方体b的长宽高：";
	b.set_cuboid();
	b.volume();

	cuboid c;
	cout << "请输入长方体c的长宽高：";
	c.set_cuboid();
	c.volume();
	
	return 0;
}