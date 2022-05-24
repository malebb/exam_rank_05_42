#include "Warlock.hpp"

Warlock::Warlock() : name(), title()
{

}

Warlock::Warlock(Warlock const & src) : name(src.name), title(src.title)
{
}

Warlock&		Warlock::operator=(Warlock const & rhs)
{
	this->name = rhs.name;
	this->title = rhs.title;
	return (*this);
}

Warlock::~Warlock()
{
	std::cout << this->name << ": My job here is done" << std::endl;
}

const std::string&		Warlock::getName(void) const
{
	return (this->name);
}

const std::string&		Warlock::getTitle(void) const
{
	return (this->title);
}

void					Warlock::setTitle(std::string const & title)
{
	this->title = title;
}
