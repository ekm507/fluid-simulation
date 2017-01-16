//define point/vector properties and functuins.

#include "types.hpp"


//used to define variables with (x,y)
//used for locating objects, and defining vectors.
//so a vector can be as point type.
class point
{
	public:
		vary_type x;
		vary_type y;
//TODO		point point(position_type, position_type);
};

/*point point::point(position_type a, position_type b)
{
	x=a;
	y=b;
	return self;
}*/


//function below returns dot product of two vectors.
/*

[x]
| | . [a  b] = ax+by.
[y]

*/
vary_type point_dot_product(point a, point b)
{
	return a.x*b.x + a.y*b.y;
}


//function below returns a vector produced by a coefficient number.
/*

n . [a   b] = [na  nb]

*/
point point_numeral_product(vary_type n, point p)
{
	point resault;
	resault.x=n*p.x;
	resault.y=n*p.y;
	return resault;
}


//function below returns minus of two vectors.
/*

   [a  b] - [x  y] = [ (a-x)   (b-y) ]

*/
point point_minus(point a, point b)
{
	point resault;
	resault.x=a.x-b.x;
	resault.y=a.y-b.y;
	return resault;
}


