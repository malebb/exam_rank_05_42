#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy")
{

}

Dummy::~Dummy()
{

}

Dummy&		Dummy::operator=(Dummy const & rhs)
{
	this->type = rhs.type;
	return (*this);
}

Dummy::Dummy(Dummy const & src) : ATarget(src)
{
}

ATarget*		Dummy::clone(void) const
{
	return (new Dummy());
}
