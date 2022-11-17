#include<cmath>

//判断输入是否合法
bool is_valid(double side1, double side2, double side3)
{
	if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
		 return true;
	else return false;
}

//求三角形面积
double area(double side1, double side2, double side3)
{
	double s;
	s = (side1 + side2 + side3) / 2;
	double area;
	area = sqrt(s*(s - side1)*(s - side2)*(s - side3));
	return area;
}
