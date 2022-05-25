#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed")
{

}

Fwoosh::~Fwoosh()
{

}

Fwoosh&		Fwoosh::operator=(Fwoosh const & rhs)
{
	this->name = rhs.name;
	this->effects = rhs.effects;
	return (*this);
}

Fwoosh::Fwoosh(Fwoosh const & src) : ASpell(src)
{	
}

ASpell*		Fwoosh::clone(void)
{
	return (new Fwoosh());
}
