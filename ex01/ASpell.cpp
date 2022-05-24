#include "ASpell.hpp"

ASpell::ASpell(): name(), effects()
{
	
}

ASpell::~ASpell()
{
}

ASpell&		ASpell::operator=(ASpell const & rhs)
{
	this->name = rhs.name;
	this->effects = rhs.effects;

	return (*this);
}

ASpell::ASpell(ASpell const & src) : name(src.name), effects(src.effects)
{

}

ASpell::ASpell(std::string name, std::string effects) : name(name), effects(effects)
{
}

std::string		ASpell::getName(void) const
{
	return (this->name);
}

std::string		ASpell::getEffects(void) const
{
	return (this->effects);
}

void			ASpell::launch(ATarget const & target)
{
	target.getHitBySpell(*this);
}
