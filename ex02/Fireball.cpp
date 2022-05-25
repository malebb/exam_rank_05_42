#include "Fireball.hpp"

Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp")
{

}

Fireball::~Fireball()
{

}

Fireball&		Fireball::operator=(Fireball const & rhs)
{
	this->name = rhs.name;
	this->effects = rhs.effects;
	return (*this);
}

Fireball::Fireball(Fireball const & src) : ASpell(src)
{	
}

ASpell*		Fireball::clone(void)
{
	return (new Fireball());
}
