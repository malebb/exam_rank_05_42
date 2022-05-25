#ifndef DUMMY_HPP
#define DUMMY_HPP

#include "ATarget.hpp"

class BrickWall : public ATarget
{
	public :
		BrickWall();
		~BrickWall();
		BrickWall(BrickWall const & src);
		BrickWall&		operator=(BrickWall const & rhs);
		ATarget		*clone(void) const;
};

#endif
