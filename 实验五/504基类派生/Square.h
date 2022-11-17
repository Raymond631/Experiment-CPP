extern class Shape;
class Square :virtual public Shape
{
private:
	double a;
public:
	Square(double aa)
	{
		a = aa;
	}
	double area();
};
double Square::area()
{
	double s;
	s = a * a;
	return (s);
}