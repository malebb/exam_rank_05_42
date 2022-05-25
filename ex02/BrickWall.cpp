#include "BrickWall.hpp"

BrickWall::BrickWall() : ATarget("Inconspicuous Red-brick Wall")
{

}

BrickWall::~BrickWall()
{

}

BrickWall&		BrickWall::operator=(BrickWall const & rhs)
{
	this->type = rhs.type;
	return (*this);
}

BrickWall::BrickWall(BrickWall const & src) : ATarget(src)
{
}

ATarget*		BrickWall::clone(void) const
{
	return (new BrickWall());
}
