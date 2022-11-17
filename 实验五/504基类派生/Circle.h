extern class Shape;
class Circle :virtual public Shape
{
private:
	double r;
public:
	Circle(double rr)
	{
		r = rr;
	}
	double area();
};
double Circle::area()
{
	double s;
	s = 3.14159 * r * r;
	return (s);
}