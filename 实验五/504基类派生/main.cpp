#include<iostream>
#include"Shape.h"
#include"Circle.h"
#include"Square.h"
#include"Rectangle.h"
#include"Trapezoid.h"
#include"Triangle.h"
using namespace std;

int main()
{
	Circle circle(10.2);
	Square square(3);
	Rectangle rectangle(3, 4);
	Trapezoid trapezoid(2.0, 4.5, 3);
	Triangle triangle(4, 5, 6);

	Shape* ptr[5] = { &circle,&square,&rectangle,&trapezoid,&triangle };
	cout << "圆的面积为" << ptr[0]->area() << endl;
	cout << "正方形的面积为" << ptr[1]->area() << endl;
	cout << "长方形的面积为" << ptr[2]->area() << endl;
	cout << "梯形的面积为" << ptr[3]->area() << endl;
	cout << "三角形的面积为" << ptr[4]->area() << endl;

	double sum_area;
	sum_area = ptr[0]->area() + ptr[1]->area() + ptr[2]->area() + ptr[3]->area() + ptr[4]->area();

	cout << endl;
	cout << "面积总和为" << sum_area << endl;
	return 0;
}