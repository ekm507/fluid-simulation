//define atom properties and functions.

#include "types.h"

class atom
{
	vary_type mass;
	vary_type radius;
	point location;
	vary_type elasticity;
	vary_type velocity;
	vary_type radial_speed;
	vary_type current_radius;
	point velocity_xy;
	friction_type dynamic_friction_coefficient;
	vary_type invmass; // inverted mass which should be (1/mass) <<TODO>>
};

point atom_normal(point a, point b)
{
	return a;
}

