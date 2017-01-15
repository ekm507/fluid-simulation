//collision and distance functions.

#include <math.h>
#include "types.hpp"
#include "atom.hpp"

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

vary_type max(vary_type a, vary_type b)
{
	return a*(a>b)+b*(b>=a);
}

vary_type min(vary_type a, vary_type b)
{
	return b*(a>b)+a*(b>=a);
}

bool atom_collision_detect(atom a, atom b)
{
	vary_type rr= a.radius + b.radius;
	return rr*rr > distance_pw2(a.location, b.location);
}




// note: function below(resolve_collision) is from this site:
//https://gamedevelopment.tutsplus.com/tutorials/how-to-create-a-custom-2d-physics-engine-the-basics-and-impulse-resolution--gamedev-6331
//it was and deathly difficult for me!
void resolve_collision(atom* a, atom* b)
{
	//calculate relative velocity
	point rv=point_minus(b->velocity_xy,a->velocity_xy);

	//calculate or determine the normal.<<< TODO: make it clear>>>	
	point normal = atom_collision_normal(*a, *b);

	// Calculate relative velocity in terms of the normal direction
	vary_type vel_along_normal = point_dot_product(rv, normal);

	// Do not resolve if velocities are separating
	if(vel_along_normal>0)
		return;
	
	// Calculate restitution
	vary_type e=min(a->elasticity, b->elasticity);

	//calculate impulse scalar
	vary_type j = -(1 + e) * vel_along_normal;
	j /=a->invmass + b->invmass; 
	
	//calculate impulse
	point impulse = point_numeral_product(j, normal);
	
	//apply impulse
	a->velocity_xy =point_minus(a->velocity_xy, point_numeral_product(a->invmass, impulse));
	b->velocity_xy =point_minus(b->velocity_xy, point_numeral_product(b->invmass, impulse));	

}


