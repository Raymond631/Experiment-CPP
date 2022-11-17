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
	cout << "Բ�����Ϊ" << ptr[0]->area() << endl;
	cout << "�����ε����Ϊ" << ptr[1]->area() << endl;
	cout << "�����ε����Ϊ" << ptr[2]->area() << endl;
	cout << "���ε����Ϊ" << ptr[3]->area() << endl;
	cout << "�����ε����Ϊ" << ptr[4]->area() << endl;

	double sum_area;
	sum_area = ptr[0]->area() + ptr[1]->area() + ptr[2]->area() + ptr[3]->area() + ptr[4]->area();

	cout << endl;
	cout << "����ܺ�Ϊ" << sum_area << endl;
	return 0;
}