//collision and distance functions.

#include <math>

vary_type distance(point a, point b)
{
	vary_type delta_x = a.x - b.x;
	vary_type delta_y = a.y - b.y;
	return sqrt( delta_x * delta_x + delta_y * delta_y);
}

vary_type distance_pw2(point a, point b)
{
	vary_type delta_x = a.x - b.x;
	vary_type delta_y = a.y - b.y;
	return delta_x*delta_x + delta_y*delta_y;
}

bool atom_collision_detect(atom a, atom b)
{
	vary_type rr= a.radius + b.radius;
	return rr*rr > distance_pw2(a.location, b.location);
}
