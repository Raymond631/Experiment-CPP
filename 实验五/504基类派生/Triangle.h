#include<cmath>
extern class Shape;
class Triangle :virtual public Shape
{
private:
	double a,b,c;
public:
	Triangle(double aa, double bb, double cc)
	{
		a = aa;
		b = bb;
		c = cc;
	}
	double area();
};
double Triangle::area()
{
	double p;//海伦公式中的p
	p = (a + b + c) / 2;
	double q;
	q = p * (p - a) * (p - b) * (p - c);
	double s;
	s = sqrt(q);
	return (s);
}