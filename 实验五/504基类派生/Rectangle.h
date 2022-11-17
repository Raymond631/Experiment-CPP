extern class Shape;
class Rectangle :virtual public Shape
{
private:
	double a,b;
public:
	Rectangle(double aa, double bb)
	{
		a = aa;
		b = bb;
	}
	double area();
};
double Rectangle::area()
{
	double s;
	s = a * b;
	return (s);
}
