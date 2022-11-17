extern class Shape;
class Trapezoid :virtual public Shape
{
private:
	double a,b,h;
public:
	Trapezoid(double aa, double bb, double hh)
	{
		a = aa;
		b = bb;
		h = hh;
	}
	double area();
};
double Trapezoid::area()
{
	double s;
	s = (a + b) * h / 2;
	return (s);
}
