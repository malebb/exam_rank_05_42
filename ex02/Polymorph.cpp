#include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter")
{

}

Polymorph::~Polymorph()
{

}

Polymorph&		Polymorph::operator=(Polymorph const & rhs)
{
	this->name = rhs.name;
	this->effects = rhs.effects;
	return (*this);
}

Polymorph::Polymorph(Polymorph const & src) : ASpell(src)
{	
}

ASpell*		Polymorph::clone(void)
{
	return (new Polymorph());
}
