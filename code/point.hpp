//define point properties and functuins.

#include "types.hpp"

class point
{
	public:
		position_type x;
		position_type y;
//TODO		point point(position_type, position_type);
};

/*point point::point(position_type a, position_type b)
{
	x=a;
	y=b;
	return self;
}*/

vary_type point_dot_product(point a, point b)
{
	return a.x*b.x + a.y*b.y;
}


point point_numeral_product(vary_type n, point p)
{
	point resault;
	resault.x=n*p.x;
	resault.y=n*p.y;
	return resault;
}

point point_minus(point a, point b)
{
	point resault;
	resault.x=a.x-b.x;
	resault.y=a.y-b.y;
	return resault;
}