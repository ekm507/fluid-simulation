//define atom properties and functions.

/*****************************************************
*                                                    *
*  an "atom" is a collection of fluid's molecules or *
*   creating principles. for example a collection of *
*   10 illion molecules of water gathering together  *
*  as a drop. thanks to Demokritus the ancient greek *
*   phylosoph we call them atom,                     *
*   which means 'undestructable'.                    *
*                                                    *
*  in atomic scale newtonic physics doesn't work ,   *
*  but in our atoms it does! because an atom is big  *
*  enough to support newtonic principles and         *
*  theoreoms. howeevr it will relate some of         *
*  koantomic rules too.                              *
*                                                    *
*  it's an interesting idea of simulation.           *
*                                                    *
*  it's cheap and easy!                              *
*                                                    *
******************************************************
*/


#include "types.hpp"
#include "point.hpp"


// define atom properties.
class atom
{
	public:
		vary_type mass;
		vary_type radius;
		point location;
		vary_type elasticity;
		vary_type velocity;
		vary_type radial_speed;
		vary_type current_radius;
		point collision_normal;
		point velocity_xy;
		vary_type dynamic_friction_coefficient;
		vary_type invmass; // inverted mass which should be (1/mass) <<TODO>>
};


//function below should be changed.<<TODO>>
//I dont know how to process atom collision normal,
//so I leave this function and continue y job!
point atom_collision_normal(atom a, atom b)
{
	return a.collision_normal;
}


