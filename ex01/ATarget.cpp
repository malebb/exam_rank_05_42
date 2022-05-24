#include "ATarget.hpp"

ATarget::ATarget()
{

}

ATarget::~ATarget()
{

}

ATarget::ATarget(ATarget const & src) : type(src.type)
{
	
}

ATarget&	ATarget::operator=(ATarget const & rhs)
{
	this->type = rhs.type;
	return (*this);
}

ATarget::ATarget(std::string type) : type(type)
{

}

std::string const &		ATarget::getType(void) const
{
	return (this->type);
}

void					ATarget::setType(std::string type)
{
	this->type = type;
}

void					ATarget::getHitBySpell(ASpell const & spell) const
{
	std::cout << this->type << " has been " << spell.getEffects() << std::endl;
}
