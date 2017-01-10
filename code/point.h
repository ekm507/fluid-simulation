//define point properties and functuins.

class point
{
	position_type x;
	position_type y;
	public:
		void point(position_type, position_type);
};

void point::point(position_type a, position_type b)
{
	x=a;
	y=b;
}

vary_type point_dot_product(point a, point b)
{
	return a.x*b.x + a.y*b.y;
}
